#ifndef org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H
#define org_apache_lucene_codecs_perfield_PerFieldKnnVectorsFormat$FieldsReader_H

#include "org/apache/lucene/codecs/KnnVectorsReader.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class Bits;
      }
      namespace index {
        class ByteVectorValues;
        class SegmentReadState;
        class FloatVectorValues;
      }
      namespace search {
        class KnnCollector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
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
        namespace perfield {

          class PerFieldKnnVectorsFormat$FieldsReader : public ::org::apache::lucene::codecs::KnnVectorsReader {
           public:
            enum {
              mid_init$_7865ebfeefbeb536,
              mid_checkIntegrity_e7bdbe105ce1bafb,
              mid_close_e7bdbe105ce1bafb,
              mid_getByteVectorValues_7ab2f26af1d93897,
              mid_getFieldReader_a47b66bbceecbfc7,
              mid_getFloatVectorValues_0c0ae22a56670782,
              mid_search_41e6931fdbdb5ba0,
              mid_search_61a952903eb61416,
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
