#ifndef org_apache_lucene_codecs_PostingsWriterBase_H
#define org_apache_lucene_codecs_PostingsWriterBase_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class Closeable;
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class IndexOutput;
        class DataOutput;
      }
      namespace util {
        class BytesRef;
        class FixedBitSet;
      }
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
        class TermsEnum;
      }
      namespace codecs {
        class NormsProducer;
        class BlockTermState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PostingsWriterBase : public ::java::lang::Object {
         public:
          enum {
            mid_close_e7bdbe105ce1bafb,
            mid_encodeTerm_38368490f1fcfc98,
            mid_init_893a09f6528ec65d,
            mid_setField_4d7193cb5c8dc4a1,
            mid_writeTerm_4326cc6a8fd7ad05,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsWriterBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsWriterBase(const PostingsWriterBase& obj) : ::java::lang::Object(obj) {}

          void close() const;
          void encodeTerm(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          void init(const ::org::apache::lucene::store::IndexOutput &, const ::org::apache::lucene::index::SegmentWriteState &) const;
          void setField(const ::org::apache::lucene::index::FieldInfo &) const;
          ::org::apache::lucene::codecs::BlockTermState writeTerm(const ::org::apache::lucene::util::BytesRef &, const ::org::apache::lucene::index::TermsEnum &, const ::org::apache::lucene::util::FixedBitSet &, const ::org::apache::lucene::codecs::NormsProducer &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(PostingsWriterBase);
        extern PyTypeObject *PY_TYPE(PostingsWriterBase);

        class t_PostingsWriterBase {
        public:
          PyObject_HEAD
          PostingsWriterBase object;
          static PyObject *wrap_Object(const PostingsWriterBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
