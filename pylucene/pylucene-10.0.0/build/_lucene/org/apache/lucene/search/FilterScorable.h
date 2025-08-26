#ifndef org_apache_lucene_search_FilterScorable_H
#define org_apache_lucene_search_FilterScorable_H

#include "org/apache/lucene/search/Scorable.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
  namespace util {
    class Collection;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class FilterScorable : public ::org::apache::lucene::search::Scorable {
         public:
          enum {
            mid_init$_c06bdf7d53c6460a,
            mid_getChildren_4a269b968b3a511f,
            mid_score_8b62236f0e4d0dbc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FilterScorable(jobject obj) : ::org::apache::lucene::search::Scorable(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FilterScorable(const FilterScorable& obj) : ::org::apache::lucene::search::Scorable(obj) {}

          FilterScorable(const ::org::apache::lucene::search::Scorable &);

          ::java::util::Collection getChildren() const;
          jfloat score() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(FilterScorable);
        extern PyTypeObject *PY_TYPE(FilterScorable);

        class t_FilterScorable {
        public:
          PyObject_HEAD
          FilterScorable object;
          static PyObject *wrap_Object(const FilterScorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
