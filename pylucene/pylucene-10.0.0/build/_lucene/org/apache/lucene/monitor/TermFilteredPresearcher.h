#ifndef org_apache_lucene_monitor_TermFilteredPresearcher_H
#define org_apache_lucene_monitor_TermFilteredPresearcher_H

#include "org/apache/lucene/monitor/Presearcher.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
      }
      namespace monitor {
        class CustomQueryHandler;
        class TermWeightor;
      }
      namespace util {
        class BytesRef;
      }
      namespace document {
        class Document;
      }
      namespace index {
        class LeafReader;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class List;
    class Set;
    namespace function {
      class BiPredicate;
    }
    class Map;
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
            mid_init$_3720c61b0679eb3e,
            mid_init$_55ece150dcdde36f,
            mid_buildQuery_5ac880f711e7891d,
            mid_indexQuery_6c9ecad1e4032583,
            mid_getQueryBuilder_02bc336b844a966a,
            mid_buildQueryDocument_4c96b8137c7fa5d6,
            mid_collectTerms_8d0d1e2bf6f0b5c7,
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
