using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace Biblioteka.Models
{
    public class Address
    {
        public string NazwaKsiążki { get; set; }
        public string Autor { get; set; }

        public string Wydawnictwo { get; set; }

        public string DataWydania { get; set; }
        public string ID { get; set; }
    }
}
