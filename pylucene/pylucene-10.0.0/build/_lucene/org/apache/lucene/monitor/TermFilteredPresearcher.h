#ifndef org_apache_lucene_monitor_TermFilteredPresearcher_H
#define org_apache_lucene_monitor_TermFilteredPresearcher_H

#include "org/apache/lucene/monitor/Presearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class CustomQueryHandler;
        class TermWeightor;
      }
      namespace document {
        class Document;
      }
      namespace search {
        class Query;
      }
      namespace util {
        class BytesRef;
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace util {
    namespace function {
      class BiPredicate;
    }
    class Map;
    class Set;
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class TermFilteredPresearcher : public ::org::apache::lucene::monitor::Presearcher {
         public:
          enum {
            mid_init$_e7bdbe105ce1bafb,
            mid_init$_47050778bb92656b,
            mid_buildQuery_3ea5bedfc296f473,
            mid_indexQuery_50a389fecd57172d,
            mid_collectTerms_030d883ed3190581,
            mid_buildQueryDocument_29e397accbe4f527,
            mid_getQueryBuilder_4560c4e2be64368f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TermFilteredPresearcher(jobject obj) : ::org::apache::lucene::monitor::Presearcher(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TermFilteredPresearcher(const TermFilteredPresearcher& obj) : ::org::apache::lucene::monitor::Presearcher(obj) {}

          static ::java::lang::String *ANYTOKEN;
          static ::java::lang::String *ANYTOKEN_FIELD;
          static ::org::apache::lucene::monitor::TermWeightor *DEFAULT_WEIGHTOR;

          TermFilteredPresearcher();
          TermFilteredPresearcher(const ::org::apache::lucene::monitor::TermWeightor &, const ::java::util::List &, const ::java::util::Set &);

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
        extern PyType_Def PY_TYPE_DEF(TermFilteredPresearcher);
        extern PyTypeObject *PY_TYPE(TermFilteredPresearcher);

        class t_TermFilteredPresearcher {
        public:
          PyObject_HEAD
          TermFilteredPresearcher object;
          static PyObject *wrap_Object(const TermFilteredPresearcher&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
