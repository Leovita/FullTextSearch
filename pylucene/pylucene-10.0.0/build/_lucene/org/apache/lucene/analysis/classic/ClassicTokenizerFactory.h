#ifndef org_apache_lucene_analysis_classic_ClassicTokenizerFactory_H
#define org_apache_lucene_analysis_classic_ClassicTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class AttributeFactory;
      }
      namespace analysis {
        namespace classic {
          class ClassicTokenizer;
        }
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
        namespace classic {

          class ClassicTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_26120e8e5832c76d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ClassicTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ClassicTokenizerFactory(const ClassicTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            ClassicTokenizerFactory();
            ClassicTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::classic::ClassicTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
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
        namespace classic {
          extern PyType_Def PY_TYPE_DEF(ClassicTokenizerFactory);
          extern PyTypeObject *PY_TYPE(ClassicTokenizerFactory);

          class t_ClassicTokenizerFactory {
          public:
            PyObject_HEAD
            ClassicTokenizerFactory object;
            static PyObject *wrap_Object(const ClassicTokenizerFactory&);
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
