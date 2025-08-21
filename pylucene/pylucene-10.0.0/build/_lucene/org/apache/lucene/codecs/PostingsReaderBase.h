#ifndef org_apache_lucene_codecs_PostingsReaderBase_H
#define org_apache_lucene_codecs_PostingsReaderBase_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class IndexInput;
      }
      namespace index {
        class FieldInfo;
        class SegmentReadState;
        class ImpactsEnum;
        class PostingsEnum;
      }
      namespace codecs {
        class BlockTermState;
      }
    }
  }
}
namespace java {
  namespace io {
    class IOException;
    class Closeable;
  }
  namespace lang {
    class Class;
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
            mid_checkIntegrity_3720c61b0679eb3e,
            mid_close_3720c61b0679eb3e,
            mid_decodeTerm_c14b3f3bf0df23b2,
            mid_impacts_4686e942072fa0cb,
            mid_init_5aeaed4c9b335aa7,
            mid_newTermState_3bf66c86f1b277c4,
            mid_postings_c852fee830ddd9aa,
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
