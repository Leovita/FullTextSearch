#ifndef org_apache_lucene_codecs_blocktreeords_OrdsBlockTreeTermsReader_H
#define org_apache_lucene_codecs_blocktreeords_OrdsBlockTreeTermsReader_H

#include "org/apache/lucene/codecs/FieldsProducer.h"

namespace java {
  namespace util {
    class Iterator;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PostingsReaderBase;
      }
      namespace index {
        class SegmentReadState;
        class Terms;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace blocktreeords {

          class OrdsBlockTreeTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
           public:
            enum {
              mid_init$_46efc898ca1ac228,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_iterator_0db4c76ff7ee995b,
              mid_size_20fbf7565993c3d7,
              mid_terms_734b49c46dc30275,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit OrdsBlockTreeTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            OrdsBlockTreeTermsReader(const OrdsBlockTreeTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

            OrdsBlockTreeTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &);

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
        namespace blocktreeords {
          extern PyType_Def PY_TYPE_DEF(OrdsBlockTreeTermsReader);
          extern PyTypeObject *PY_TYPE(OrdsBlockTreeTermsReader);

          class t_OrdsBlockTreeTermsReader {
          public:
            PyObject_HEAD
            OrdsBlockTreeTermsReader object;
            static PyObject *wrap_Object(const OrdsBlockTreeTermsReader&);
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
