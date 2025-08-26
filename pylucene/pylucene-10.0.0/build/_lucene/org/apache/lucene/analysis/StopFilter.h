#ifndef org_apache_lucene_analysis_StopFilter_H
#define org_apache_lucene_analysis_StopFilter_H

#include "org/apache/lucene/analysis/FilteringTokenFilter.h"

namespace java {
  namespace lang {
    class Object;
    class Class;
    class String;
  }
  namespace util {
    class List;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        class CharArraySet;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {

        class StopFilter : public ::org::apache::lucene::analysis::FilteringTokenFilter {
         public:
          enum {
            mid_init$_c584271ff3a78226,
            mid_makeStopSet_8ff89f7b440fe4e7,
            mid_makeStopSet_b7b7585e2add8bd2,
            mid_makeStopSet_390167ca95c298a8,
            mid_makeStopSet_a1f91b1f6e3b9ce9,
            mid_accept_9aa4f33e82ea333f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit StopFilter(jobject obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          StopFilter(const StopFilter& obj) : ::org::apache::lucene::analysis::FilteringTokenFilter(obj) {}

          StopFilter(const ::org::apache::lucene::analysis::TokenStream &, const ::org::apache::lucene::analysis::CharArraySet &);

          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const JArray< ::java::lang::String > &);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const ::java::util::List &);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const JArray< ::java::lang::String > &, jboolean);
          static ::org::apache::lucene::analysis::CharArraySet makeStopSet(const ::java::util::List &, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        extern PyType_Def PY_TYPE_DEF(StopFilter);
        extern PyTypeObject *PY_TYPE(StopFilter);

        class t_StopFilter {
        public:
          PyObject_HEAD
          StopFilter object;
          static PyObject *wrap_Object(const StopFilter&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
