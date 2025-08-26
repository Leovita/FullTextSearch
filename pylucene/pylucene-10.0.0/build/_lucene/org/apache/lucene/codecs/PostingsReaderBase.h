#ifndef org_apache_lucene_codecs_PostingsReaderBase_H
#define org_apache_lucene_codecs_PostingsReaderBase_H

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
      namespace index {
        class SegmentReadState;
        class PostingsEnum;
        class FieldInfo;
        class ImpactsEnum;
      }
      namespace store {
        class DataInput;
        class IndexInput;
      }
      namespace codecs {
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

        class PostingsReaderBase : public ::java::lang::Object {
         public:
          enum {
            mid_checkIntegrity_e7bdbe105ce1bafb,
            mid_close_e7bdbe105ce1bafb,
            mid_decodeTerm_c3dbd9645173728c,
            mid_impacts_96d8b619eb0f0973,
            mid_init_ba939baed22f7c47,
            mid_newTermState_90e39a1aad9f7074,
            mid_postings_d91efdb4d7782ade,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsReaderBase(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsReaderBase(const PostingsReaderBase& obj) : ::java::lang::Object(obj) {}

          void checkIntegrity() const;
          void close() const;
          void decodeTerm(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
          ::org::apache::lucene::index::ImpactsEnum impacts(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jint) const;
          void init(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::index::SegmentReadState &) const;
          ::org::apache::lucene::codecs::BlockTermState newTermState() const;
          ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(PostingsReaderBase);
        extern PyTypeObject *PY_TYPE(PostingsReaderBase);

        class t_PostingsReaderBase {
        public:
          PyObject_HEAD
          PostingsReaderBase object;
          static PyObject *wrap_Object(const PostingsReaderBase&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
