#ifndef org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H
#define org_apache_lucene_analysis_en_AbstractWordsFileFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
      namespace analysis {
        class CharArraySet;
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
        namespace en {

          class AbstractWordsFileFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_6a7e23584beb7c0f,
              mid_getFormat_e7df854526d67fa3,
              mid_getWordFiles_e7df854526d67fa3,
              mid_getWords_0a8f3a685855aa4f,
              mid_inform_4ba602df53b96765,
              mid_isIgnoreCase_9aa4f33e82ea333f,
              mid_createDefaultWords_0a8f3a685855aa4f,
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
