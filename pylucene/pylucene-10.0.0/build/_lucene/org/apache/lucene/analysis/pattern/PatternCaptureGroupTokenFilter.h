#ifndef org_apache_lucene_analysis_pattern_PatternCaptureGroupTokenFilter_H
#define org_apache_lucene_analysis_pattern_PatternCaptureGroupTokenFilter_H

#include "org/apache/lucene/analysis/TokenFilter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
  }
  namespace util {
    namespace regex {
      class Pattern;
    }
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternCaptureGroupTokenFilter : public ::org::apache::lucene::analysis::TokenFilter {
           public:
            enum {
              mid_init$_2e89b7f5aafdbc00,
              mid_incrementToken_9aa4f33e82ea333f,
              mid_reset_e7bdbe105ce1bafb,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternCaptureGroupTokenFilter(jobject obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternCaptureGroupTokenFilter(const PatternCaptureGroupTokenFilter& obj) : ::org::apache::lucene::analysis::TokenFilter(obj) {}

            PatternCaptureGroupTokenFilter(const ::org::apache::lucene::analysis::TokenStream &, jboolean, const JArray< ::java::util::regex::Pattern > &);

            jboolean incrementToken() const;
            void reset() const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          extern PyType_Def PY_TYPE_DEF(PatternCaptureGroupTokenFilter);
          extern PyTypeObject *PY_TYPE(PatternCaptureGroupTokenFilter);

          class t_PatternCaptureGroupTokenFilter {
          public:
            PyObject_HEAD
            PatternCaptureGroupTokenFilter object;
            static PyObject *wrap_Object(const PatternCaptureGroupTokenFilter&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
