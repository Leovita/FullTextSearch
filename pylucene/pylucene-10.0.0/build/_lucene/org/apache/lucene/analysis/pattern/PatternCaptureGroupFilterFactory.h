#ifndef org_apache_lucene_analysis_pattern_PatternCaptureGroupFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternCaptureGroupFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
        namespace pattern {
          class PatternCaptureGroupTokenFilter;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {

          class PatternCaptureGroupFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_a815cbaedc735605,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternCaptureGroupFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternCaptureGroupFilterFactory(const PatternCaptureGroupFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PatternCaptureGroupFilterFactory();
            PatternCaptureGroupFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::PatternCaptureGroupTokenFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(PatternCaptureGroupFilterFactory);
          extern PyTypeObject *PY_TYPE(PatternCaptureGroupFilterFactory);

          class t_PatternCaptureGroupFilterFactory {
          public:
            PyObject_HEAD
            PatternCaptureGroupFilterFactory object;
            static PyObject *wrap_Object(const PatternCaptureGroupFilterFactory&);
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
