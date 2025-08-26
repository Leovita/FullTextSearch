#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H

#include "org/apache/lucene/analysis/TokenFilterFactory.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class ResourceLoaderAware;
        class ResourceLoader;
      }
      namespace analysis {
        class TokenStream;
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
      namespace search {
        namespace suggest {
          namespace analyzing {

            class SuggestStopFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_6a7e23584beb7c0f,
                mid_create_f3e050e998938273,
                mid_getStopWords_0a8f3a685855aa4f,
                mid_inform_4ba602df53b96765,
                mid_isIgnoreCase_9aa4f33e82ea333f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit SuggestStopFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              SuggestStopFilterFactory(const SuggestStopFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

              static ::java::lang::String *FORMAT_SNOWBALL;
              static ::java::lang::String *FORMAT_WORDSET;
              static ::java::lang::String *NAME;

              SuggestStopFilterFactory();
              SuggestStopFilterFactory(const ::java::util::Map &);

              ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
              ::org::apache::lucene::analysis::CharArraySet getStopWords() const;
              void inform(const ::org::apache::lucene::util::ResourceLoader &) const;
              jboolean isIgnoreCase() const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace suggest {
          namespace analyzing {
            extern PyType_Def PY_TYPE_DEF(SuggestStopFilterFactory);
            extern PyTypeObject *PY_TYPE(SuggestStopFilterFactory);

            class t_SuggestStopFilterFactory {
            public:
              PyObject_HEAD
              SuggestStopFilterFactory object;
              static PyObject *wrap_Object(const SuggestStopFilterFactory&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
