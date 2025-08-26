#ifndef org_apache_lucene_analysis_ja_JapanesePartOfSpeechStopFilterFactory_H
#define org_apache_lucene_analysis_ja_JapanesePartOfSpeechStopFilterFactory_H

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
        namespace ja {

          class JapanesePartOfSpeechStopFilterFactory : public ::org::apache::lucene::analysis::TokenFilterFactory {
           public:
            enum {
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_6a7e23584beb7c0f,
              mid_create_f3e050e998938273,
              mid_inform_4ba602df53b96765,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit JapanesePartOfSpeechStopFilterFactory(jobject obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            JapanesePartOfSpeechStopFilterFactory(const JapanesePartOfSpeechStopFilterFactory& obj) : ::org::apache::lucene::analysis::TokenFilterFactory(obj) {}

            static ::java::lang::String *NAME;

            JapanesePartOfSpeechStopFilterFactory();
            JapanesePartOfSpeechStopFilterFactory(const ::java::util::Map &);

            ::org::apache::lucene::analysis::TokenStream create(const ::org::apache::lucene::analysis::TokenStream &) const;
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
        namespace ja {
          extern PyType_Def PY_TYPE_DEF(JapanesePartOfSpeechStopFilterFactory);
          extern PyTypeObject *PY_TYPE(JapanesePartOfSpeechStopFilterFactory);

          class t_JapanesePartOfSpeechStopFilterFactory {
          public:
            PyObject_HEAD
            JapanesePartOfSpeechStopFilterFactory object;
            static PyObject *wrap_Object(const JapanesePartOfSpeechStopFilterFactory&);
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
