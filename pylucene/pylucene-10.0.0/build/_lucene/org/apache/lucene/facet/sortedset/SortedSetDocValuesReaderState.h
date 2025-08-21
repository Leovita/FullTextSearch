#ifndef org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_SortedSetDocValuesReaderState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class SortedSetDocValues;
        class IndexReader;
      }
      namespace facet {
        namespace sortedset {
          class SortedSetDocValuesReaderState$OrdRange;
          class SortedSetDocValuesReaderState$DimTree;
        }
        class FacetsConfig;
      }
      namespace util {
        class Accountable;
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
    class Iterable;
  }
  namespace util {
    class Map;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class SortedSetDocValuesReaderState : public ::java::lang::Object {
           public:
            enum {
              mid_getDimTree_31fe6b5f17f7311c,
              mid_getDims_11d5156a64e3246d,
              mid_getDocValues_348af2e8d793dd96,
              mid_getFacetsConfig_b68548eec032942f,
              mid_getField_09a7afff1868fc5e,
              mid_getOrdRange_717bbb88d75a181e,
              mid_getPrefixToOrdRange_f125f26c07a7bec8,
              mid_getReader_38e68c08dc5fee6f,
              mid_getSize_20fbf7565993c3d7,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SortedSetDocValuesReaderState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SortedSetDocValuesReaderState(const SortedSetDocValuesReaderState& obj) : ::java::lang::Object(obj) {}

            static jint INVALID_ORDINAL;

            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(SortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(SortedSetDocValuesReaderState);

          class t_SortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            SortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const SortedSetDocValuesReaderState&);
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
