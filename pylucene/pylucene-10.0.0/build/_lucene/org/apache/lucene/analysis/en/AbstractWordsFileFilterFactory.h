#ifndef org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H
#define org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace java {
  namespace io {
    class IOException;
  }
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
      namespace util {
        class ResourceLoader;
        class ResourceLoaderAware;
      }
      namespace analysis {
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
        namespace en {

          class AbstractWordsFileFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_79ba0f5a7d05e623,
              mid_getFormat_09a7afff1868fc5e,
              mid_getWordFiles_09a7afff1868fc5e,
              mid_getWords_7a52625961f2f88e,
              mid_inform_6addbf380886844e,
              mid_isIgnoreCase_947277eca0748c4e,
              mid_createDefaultWords_7a52625961f2f88e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit AbstractWordsFileFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            AbstractWordsFileFilterFactory(const AbstractWordsFileFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *FORMAT_SNOWBALL;
            static ::java::lang::String *FORMAT_WORDSET;

            AbstractWordsFileFilterFactory(const ::java::util::Map &);

            ::java::lang::String getFormat() const;
            ::java::lang::String getWordFiles() const;
            ::org::apache::lucene::analysis::CharArraySet getWords() const;
            void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
            jboolean isIgnoreCase() const;
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
        namespace en {
          extern PyType_Def PY_TYPE_DEF(AbstractWordsFileFilterFactory);
          extern PyTypeObject *PY_TYPE(AbstractWordsFileFilterFactory);

          class t_AbstractWordsFileFilterFactory {
          public:
            PyObject_HEAD
            AbstractWordsFileFilterFactory object;
            static PyObject *wrap_Object(const AbstractWordsFileFilterFactory&);
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
