#ifndef org_apache_lucene_codecs_blockterms_BlockTermsReader_H
#define org_apache_lucene_codecs_blockterms_BlockTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class SegmentReadState;
      }
      namespace codecs {
        namespace blockterms {
          class TermsIndexReaderBase;
        }
        class PostingsReaderBase;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blockterms {

          class BlockTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_c2278044e27ea81f,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_iterator_c7985fafdcf40e83,
              mid_size_bd89ce15dad49192,
              mid_terms_b30320f056ffba8d,
              mid_toString_e7df854526d67fa3,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BlockTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BlockTermsReader(const BlockTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            BlockTermsReader(const ::org::apache::lucene::codecs::blockterms::TermsIndexReaderBase &, const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Iterator iterator() const;
            jint size() const;
            ::org::apache::lucene::index::Terms terms(const ::java::lang::String &) const;
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
      namespace codecs {
        namespace blockterms {
          extern PyType_Def PY_TYPE_DEF(BlockTermsReader);
          extern PyTypeObject *PY_TYPE(BlockTermsReader);

          class t_BlockTermsReader {
          public:
            PyObject_HEAD
            BlockTermsReader object;
            static PyObject *wrap_Object(const BlockTermsReader&);
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
