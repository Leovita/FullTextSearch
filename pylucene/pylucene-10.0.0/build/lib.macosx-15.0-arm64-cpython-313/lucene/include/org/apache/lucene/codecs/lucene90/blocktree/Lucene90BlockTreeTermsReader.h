#ifndef org_apache_lucene_codecs_lucene90_blocktree_Lucene90BlockTreeTermsReader_H
#define org_apache_lucene_codecs_lucene90_blocktree_Lucene90BlockTreeTermsReader_H

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
        namespace lucene90 {
          namespace blocktree {

            class Lucene90BlockTreeTermsReader : public ::org::apache::lucene::codecs::FieldsProducer {
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

              explicit Lucene90BlockTreeTermsReader(jobject obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90BlockTreeTermsReader(const Lucene90BlockTreeTermsReader& obj) : ::org::apache::lucene::codecs::FieldsProducer(obj) {}

              static jint VERSION_CURRENT;
              static jint VERSION_FST_CONTINUOUS_ARCS;
              static jint VERSION_MSB_VLONG_OUTPUT;
              static jint VERSION_START;

              Lucene90BlockTreeTermsReader(const ::org::apache::lucene::codecs::PostingsReaderBase &, const ::org::apache::lucene::index::SegmentReadState &);

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
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene90 {
          namespace blocktree {
            extern PyType_Def PY_TYPE_DEF(Lucene90BlockTreeTermsReader);
            extern PyTypeObject *PY_TYPE(Lucene90BlockTreeTermsReader);

            class t_Lucene90BlockTreeTermsReader {
            public:
              PyObject_HEAD
              Lucene90BlockTreeTermsReader object;
              static PyObject *wrap_Object(const Lucene90BlockTreeTermsReader&);
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
