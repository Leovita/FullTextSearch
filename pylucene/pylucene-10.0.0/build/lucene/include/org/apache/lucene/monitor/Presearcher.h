#ifndef org_apache_lucene_monitor_Presearcher_H
#define org_apache_lucene_monitor_Presearcher_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    namespace function {
      class BiPredicate;
    }
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class Document;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace monitor {
        class Presearcher;
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class Presearcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_buildQuery_3ea5bedfc296f473,
            mid_indexQuery_50a389fecd57172d,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Presearcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Presearcher(const Presearcher& obj) : ::java::lang::Object(obj) {}

          static Presearcher *NO_FILTERING;

          Presearcher();

          ::org::apache::lucene::search::Query buildQuery(const ::org::apache::lucene::index::LeafReader &, const ::java::util::function::BiPredicate &) const;
          ::org::apache::lucene::document::Document indexQuery(const ::org::apache::lucene::search::Query &, const ::java::util::Map &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        extern PyType_Def PY_TYPE_DEF(Presearcher);
        extern PyTypeObject *PY_TYPE(Presearcher);

        class t_Presearcher {
        public:
          PyObject_HEAD
          Presearcher object;
          static PyObject *wrap_Object(const Presearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
