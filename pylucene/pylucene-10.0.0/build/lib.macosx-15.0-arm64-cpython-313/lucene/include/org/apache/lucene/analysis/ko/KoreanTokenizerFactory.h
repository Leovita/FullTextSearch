#ifndef org_apache_lucene_analysis_ko_KoreanTokenizerFactory_H
#define org_apache_lucene_analysis_ko_KoreanTokenizerFactory_H

#include "org/apache/lucene/analysis/TokenizerFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace ko {
          class KoreanTokenizer;
        }
      }
      namespace util {
        class ResourceLoader;
        class AttributeFactory;
        class ResourceLoaderAware;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
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
        namespace ko {

          class KoreanTokenizerFactory : public ::org::apache::lucene::analysis::TokenizerFactory {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_79ba0f5a7d05e623,
              mid_create_2e6e531fed8e29b6,
              mid_inform_6addbf380886844e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit KoreanTokenizerFactory(jobject obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            KoreanTokenizerFactory(const KoreanTokenizerFactory& obj) : ::org::apache::lucene::analysis::TokenizerFactory(obj) {}

            static ::java::lang::String *NAME;

            KoreanTokenizerFactory();
            KoreanTokenizerFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::ko::KoreanTokenizer create(const ::org::apache::lucene::util::AttributeFactory &) const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
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
        namespace ko {
          extern PyType_Def PY_TYPE_DEF(KoreanTokenizerFactory);
          extern PyTypeObject *PY_TYPE(KoreanTokenizerFactory);

          class t_KoreanTokenizerFactory {
          public:
            PyObject_HEAD
            KoreanTokenizerFactory object;
            static PyObject *wrap_Object(const KoreanTokenizerFactory&);
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
