#ifndef org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsWriter_H
#define org_apache_lucene_codecs_uniformsplit_sharedterms_STUniformSplitTermsWriter_H

#include "org/apache/lucene/codecs/uniformsplit/UniformSplitTermsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class SegmentWriteState;
        class Fields;
      }
      namespace codecs {
        class PostingsWriterBase;
        namespace uniformsplit {
          class BlockEncoder;
        }
        class NormsProducer;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace uniformsplit {
          namespace sharedterms {

            class STUniformSplitTermsWriter : public ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter {
             public:
              enum {
                mid_init$_0298775a93f62f34,
                mid_init$_9f43c54b2bdab56b,
                mid_merge_929f03e0512be607,
                mid_write_77e46eb449cb8d9e,
                mid_writeDictionary_e6c70f3adb910106,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit STUniformSplitTermsWriter(jobject obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              STUniformSplitTermsWriter(const STUniformSplitTermsWriter& obj) : ::org::apache::lucene::codecs::uniformsplit::UniformSplitTermsWriter(obj) {}

              STUniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);
              STUniformSplitTermsWriter(const ::org::apache::lucene::codecs::PostingsWriterBase &, const ::org::apache::lucene::index::SegmentWriteState &, jint, jint, const ::org::apache::lucene::codecs::uniformsplit::BlockEncoder &);

              void merge(const ::org::apache::lucene::index::MergeState &, const ::org::apache::lucene::codecs::NormsProducer &) const;
              void write(const ::org::apache::lucene::index::Fields &, const ::org::apache::lucene::codecs::NormsProducer &) const;
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
            extern PyType_Def PY_TYPE_DEF(STUniformSplitTermsWriter);
            extern PyTypeObject *PY_TYPE(STUniformSplitTermsWriter);

            class t_STUniformSplitTermsWriter {
            public:
              PyObject_HEAD
              STUniformSplitTermsWriter object;
              static PyObject *wrap_Object(const STUniformSplitTermsWriter&);
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
