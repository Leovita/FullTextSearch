#ifndef org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizerFactory_H
#define org_apache_lucene_analysis_pattern_SimplePatternSplitTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace pattern {
          class SimplePatternSplitTokenizer;
        }
      }
      namespace util {
        class AttributeFactory;
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

          class SimplePatternSplitTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_1dde6730530776c6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimplePatternSplitTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimplePatternSplitTokenizerFactory(const SimplePatternSplitTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;
            static ::java::lang::String *PATTERN;

            SimplePatternSplitTokenizerFactory();
            SimplePatternSplitTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::pattern::SimplePatternSplitTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
          extern PyType_Def PY_TYPE_DEF(SimplePatternSplitTokenizerFactory);
          extern PyTypeObject *PY_TYPE(SimplePatternSplitTokenizerFactory);

          class t_SimplePatternSplitTokenizerFactory {
          public:
            PyObject_HEAD
            SimplePatternSplitTokenizerFactory object;
            static PyObject *wrap_Object(const SimplePatternSplitTokenizerFactory&);
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
