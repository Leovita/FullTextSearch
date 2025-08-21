#ifndef org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H
#define org_apache_lucene_codecs_lucene90_compressing_Lucene90CompressingTermVectorsWriter_H

#include "org/apache/lucene/codecs/TermVectorsWriter.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class MergeState;
        class FieldInfo;
      }
      namespace util {
        class Accountable;
        class BytesRef;
      }
      namespace store {
        class DataInput;
      }
    }
  }
}
namespace java {
  namespace util {
    class Collection;
  }
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
        namespace lucene90 {
          namespace compressing {

            class Lucene90CompressingTermVectorsWriter : public ::org::apache::lucene::codecs::TermVectorsWriter {
             public:
              enum {
                mid_addPosition_54dd3593ad2b559e,
                mid_addProx_f7a100bced2e63eb,
                mid_close_3720c61b0679eb3e,
                mid_finish_540b2b23d51b1efd,
                mid_finishDocument_3720c61b0679eb3e,
                mid_finishField_3720c61b0679eb3e,
                mid_getChildResources_aa58b3beec16cbbd,
                mid_merge_1b76b11a0c4e302d,
                mid_ramBytesUsed_16939d9d0a9a9721,
                mid_startDocument_540b2b23d51b1efd,
                mid_startField_109b6acc549dbc3d,
                mid_startTerm_be93bdc4fbbb5027,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit Lucene90CompressingTermVectorsWriter(jobject obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              Lucene90CompressingTermVectorsWriter(const Lucene90CompressingTermVectorsWriter& obj) : ::org::apache::lucene::codecs::TermVectorsWriter(obj) {}

              void addPosition(jint, jint, jint, const ::org::apache::lucene::util::BytesRef &) const;
              void addProx(jint, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::store::DataInput &) const;
              void close() const;
              void finish(jint) const;
              void finishDocument() const;
              void finishField() const;
              ::java::util::Collection getChildResources() const;
              jint merge(const ::org::apache::lucene::index::MergeState &) const;
              jlong ramBytesUsed() const;
              void startDocument(jint) const;
              void startField(const ::org::apache::lucene::index::FieldInfo &, jint, jboolean, jboolean, jboolean) const;
              void startTerm(const ::org::apache::lucene::util::BytesRef &, jint) const;
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
          namespace compressing {
            extern PyType_Def PY_TYPE_DEF(Lucene90CompressingTermVectorsWriter);
            extern PyTypeObject *PY_TYPE(Lucene90CompressingTermVectorsWriter);

            class t_Lucene90CompressingTermVectorsWriter {
            public:
              PyObject_HEAD
              Lucene90CompressingTermVectorsWriter object;
              static PyObject *wrap_Object(const Lucene90CompressingTermVectorsWriter&);
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
