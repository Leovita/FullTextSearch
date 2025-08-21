#ifndef org_apache_lucene_backward_codecs_lucene84_Lucene84PostingsReader_H
#define org_apache_lucene_backward_codecs_lucene84_Lucene84PostingsReader_H

#include "org/apache/lucene/codecs/PostingsReaderBase.h"

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
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene84 {

          class Lucene84PostingsReader : public ::org::apache::lucene::codecs::PostingsReaderBase {
           public:
            enum {
              mid_init$_3a0f0d76cb59d83b,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_decodeTerm_c14b3f3bf0df23b2,
              mid_impacts_4686e942072fa0cb,
              mid_init_5aeaed4c9b335aa7,
              mid_newTermState_3bf66c86f1b277c4,
              mid_postings_c852fee830ddd9aa,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene84PostingsReader(jobject obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene84PostingsReader(const Lucene84PostingsReader& obj) : ::org::apache::lucene::codecs::PostingsReaderBase(obj) {}

            Lucene84PostingsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            void decodeTerm(const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jboolean) const;
            ::org::apache::lucene::index::ImpactsEnum impacts(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, jint) const;
            void init(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::BlockTermState newTermState() const;
            ::org::apache::lucene::index::PostingsEnum postings(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &, const ::org::apache::lucene::index::PostingsEnum &, jint) const;
            ::java::lang::String toString() const;
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
      namespace backward_codecs {
        namespace lucene84 {
          extern PyType_Def PY_TYPE_DEF(Lucene84PostingsReader);
          extern PyTypeObject *PY_TYPE(Lucene84PostingsReader);

          class t_Lucene84PostingsReader {
          public:
            PyObject_HEAD
            Lucene84PostingsReader object;
            static PyObject *wrap_Object(const Lucene84PostingsReader&);
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
