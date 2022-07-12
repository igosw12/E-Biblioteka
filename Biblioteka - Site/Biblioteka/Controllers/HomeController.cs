using Biblioteka.Models;
using Microsoft.AspNetCore.Mvc;
using Microsoft.Extensions.Logging;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Threading.Tasks;
using System.Data.SqlClient;

namespace Biblioteka.Controllers
{
    public class HomeController : Controller
    {
        SqlCommand com = new SqlCommand();
        SqlDataReader dr;
        SqlConnection con = new SqlConnection();
        List<Address> addresses = new List<Address>();
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
            con.ConnectionString = Biblioteka.Properties.Resources.ConnectionString;
        }

        public IActionResult Index()
        {
            FetchData();
            return View(addresses);
        }
        private void FetchData()
        {
            if (addresses.Count > 0)
            {
                addresses.Clear();
            }
            try
            {
                con.Open();
                com.Connection = con;
                com.CommandText = "SELECT TOP (100) [Nazwa Ksiązki],[Autor],[Wydawnictwo],[Data wydania],[ID] FROM[Projekt].[dbo].[Ksiazki]";
                dr = com.ExecuteReader();
                while (dr.Read())
                {
                    addresses.Add(new Address()
                    {
                        NazwaKsiążki = dr["Nazwa Ksiązki"].ToString()
                    ,
                        Autor = dr["Autor"].ToString()
                    ,
                        Wydawnictwo = dr["Wydawnictwo"].ToString()
                    ,
                        DataWydania  = dr["Data Wydania"].ToString()
                    ,
                        ID = dr["ID"].ToString()
                    });
                }
                con.Close();
            }
            catch (Exception ex)
            {
                throw ex;
            }
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}
