#ifndef org_apache_lucene_monitor_CandidateMatcher_H
#define org_apache_lucene_monitor_CandidateMatcher_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        class IndexSearcher;
      }
      namespace monitor {
        class QueryMatch;
        class MultiMatchingQueries;
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
    class String;
    class Exception;
  }
  namespace util {
    class Map;
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
            mid_init$_64fdfedb3d23d646,
            mid_finish_df23a7f7fd4fb166,
            mid_matchQuery_5f33980d0e5d47c7,
            mid_reportError_f96e8aa748869c8b,
            mid_resolve_bdef7bbdb2bb527e,
            mid_addMatch_faefe5b40c669f40,
            mid_doFinish_3720c61b0679eb3e,
            mid_copyMatches_720bfaa93343d7fc,
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
