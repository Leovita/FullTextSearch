#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitPostingsFormat_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitPostingsFormat_H

#include "org/apache/lucene/codecs/uniformsplit/UniformSplitPostingsFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          class BlockDecoder;
          class BlockEncoder;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STUniformSplitPostingsFormat : public ::org::apache::lucene::codecs::uniformsplit::UniformSplitPostingsFormat {
             public:
              enum {
                mid_init$_e7bdbe105ce1bafb,
                mid_init$_17eb042dd21cc0fb,
                mid_createUniformSplitTermsWriter_56aa2eac16800837,
                mid_createUniformSplitTermsReader_02ab2f453f35c141,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STUniformSplitPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitPostingsFormat(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STUniformSplitPostingsFormat(const STUniformSplitPostingsFormat& obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitPostingsFormat(obj) {}

              static ::java::lang::String *NAME;
              static ::java::lang::String *TERMS_BLOCKS_EXTENSION;
              static ::java::lang::String *TERMS_DICTIONARY_EXTENSION;
              static jint VERSION_CURRENT;

              STUniformSplitPostingsFormat();
              STUniformSplitPostingsFormat(jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &, const ::org::apache::lucene::codecs::uniformsplit::BlockDecoder &, jboolean);
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
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {
            extern PyType_Def PY_TYPE_DEF(STUniformSplitPostingsFormat);
            extern PyTypeObject *PY_TYPE(STUniformSplitPostingsFormat);

            class t_STUniformSplitPostingsFormat {
            public:
              PyObject_HEAD
              STUniformSplitPostingsFormat object;
              static PyObject *wrap_Object(const STUniformSplitPostingsFormat&);
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
