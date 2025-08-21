#ifndef org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H
#define org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class KnnCollector;
      }
      namespace index {
        class ByteVectorValues;
        class SegmentReadState;
        class FloatVectorValues;
      }
      namespace util {
        class Bits;
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
      namespace codecs {
        namespace perfield {

          class PerFieldKnnVectorsFormat$FieldsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_init$_3a0f0d76cb59d83b,
              mid_checkIntegrity_3720c61b0679eb3e,
              mid_close_3720c61b0679eb3e,
              mid_getByteVectorValues_b6d55ee35cf0a7cd,
              mid_getFieldReader_ed6b8d1f8e73cde5,
              mid_getFloatVectorValues_d99d2b92faec6895,
              mid_search_e7c7b5d865f31eb3,
              mid_search_210bbfb50a2f4ef9,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PerFieldKnnVectorsFormat$FieldsReader(jobject obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PerFieldKnnVectorsFormat$FieldsReader(const PerFieldKnnVectorsFormat$FieldsReader& obj) : ::org::apache::lucene::codecs::KnnVectorsReader(obj) {}

            PerFieldKnnVectorsFormat$FieldsReader(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::org::apache::lucene::index::ByteVectorValues getByteVectorValues(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::KnnVectorsReader getFieldReader(const ::java::lang::String &) const;
            ::org::apache::lucene::index::FloatVectorValues getFloatVectorValues(const ::java::lang::String &) const;
            void search(const ::java::lang::String &, const JArray< jbyte > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
            void search(const ::java::lang::String &, const JArray< jfloat > &, const ::org::apache::lucene::search::KnnCollector &, const ::org::apache::lucene::util::Bits &) const;
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
        namespace perfield {
          extern PyType_Def PY_TYPE_DEF(PerFieldKnnVectorsFormat$FieldsReader);
          extern PyTypeObject *PY_TYPE(PerFieldKnnVectorsFormat$FieldsReader);

          class t_PerFieldKnnVectorsFormat$FieldsReader {
          public:
            PyObject_HEAD
            PerFieldKnnVectorsFormat$FieldsReader object;
            static PyObject *wrap_Object(const PerFieldKnnVectorsFormat$FieldsReader&);
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
