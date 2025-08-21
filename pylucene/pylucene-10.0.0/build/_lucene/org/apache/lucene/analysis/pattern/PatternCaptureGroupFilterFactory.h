#ifndef org_apache_lucene_analysis_pattern_PatternCaptureGroupFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternCaptureGroupFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          class PatternCaptureGroupTokenFilter;
        }
        class TokenStream;
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
    class Map;
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
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_aafb65e2e96b21ee,
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
