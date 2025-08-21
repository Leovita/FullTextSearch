#ifndef org_apache_lucene_analysis_pattern_PatternReplaceFilterFactory_H
#define org_apache_lucene_analysis_pattern_PatternReplaceFilterFactory_H

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
        namespace pattern {
          class PatternReplaceFilter;
        }
        class TokenStream;
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

          class PatternReplaceFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_7f1d4ce351e5cdde,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PatternReplaceFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PatternReplaceFilterFactory(const PatternReplaceFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            PatternReplaceFilterFactory();
            PatternReplaceFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::PatternReplaceFilter create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
          extern PyType_Def PY_TYPE_DEF(PatternReplaceFilterFactory);
          extern PyTypeObject *PY_TYPE(PatternReplaceFilterFactory);

          class t_PatternReplaceFilterFactory {
          public:
            PyObject_HEAD
            PatternReplaceFilterFactory object;
            static PyObject *wrap_Object(const PatternReplaceFilterFactory&);
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
