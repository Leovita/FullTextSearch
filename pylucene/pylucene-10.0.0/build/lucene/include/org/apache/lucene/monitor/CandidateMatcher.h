#ifndef org_apache_lucene_monitor_CandidateMatcher_H
#define org_apache_lucene_monitor_CandidateMatcher_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class Exception;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {
        class MultiMatchingQueries;
        class QueryMatch;
      }
      namespace search {
        class Query;
        class IndexSearcher;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace monitor {

        class CandidateMatcher : public ::java::lang::Object {
         public:
          enum {
            mid_init$_ca121b0bc447f41f,
            mid_finish_a8c9845d4bceb8dd,
            mid_matchQuery_ae573456fdb2ff0e,
            mid_reportError_a76f7f52784b7edf,
            mid_resolve_32842a30f5e442d8,
            mid_doFinish_e7bdbe105ce1bafb,
            mid_copyMatches_447bf246291c51d0,
            mid_addMatch_c08c85baa324da33,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CandidateMatcher(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CandidateMatcher(const CandidateMatcher& obj) : ::java::lang::Object(obj) {}

          CandidateMatcher(const ::org::apache::lucene::search::IndexSearcher &);

          ::org::apache::lucene::monitor::MultiMatchingQueries finish(jlong, jint) const;
          void matchQuery(const ::java::lang::String &, const ::org::apache::lucene::search::Query &, const ::java::util::Map &) const;
          void reportError(const ::java::lang::String &, const ::java::lang::Exception &) const;
          ::org::apache::lucene::monitor::QueryMatch resolve(const ::org::apache::lucene::monitor::QueryMatch &, const ::org::apache::lucene::monitor::QueryMatch &) const;
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
        extern PyType_Def PY_TYPE_DEF(CandidateMatcher);
        extern PyTypeObject *PY_TYPE(CandidateMatcher);

        class t_CandidateMatcher {
        public:
          PyObject_HEAD
          CandidateMatcher object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_CandidateMatcher *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const CandidateMatcher&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const CandidateMatcher&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
