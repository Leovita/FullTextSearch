#ifndef org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H
#define org_apache_lucene_search_suggest_analyzing_SuggestStopFilterFactory_H

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
        class TokenStream;
      }
    }
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
                mid_init$_3720c61b0679eb3e,
                mid_init$_79ba0f5a7d05e623,
                mid_create_2ec4d1726b35d478,
                mid_getStopWords_7a52625961f2f88e,
                mid_inform_6addbf380886844e,
                mid_isIgnoreCase_947277eca0748c4e,
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
