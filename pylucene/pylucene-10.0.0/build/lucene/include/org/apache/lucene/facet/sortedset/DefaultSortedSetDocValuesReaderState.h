#ifndef org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H
#define org_apache_lucene_facet_sortedset_DefaultSortedSetDocValuesReaderState_H

#include "org/apache/lucene/facet/sortedset/SortedSetDocValuesReaderState.h"

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
  namespace util {
    class Collection;
    class Map;
  }
  namespace lang {
    class Class;
    class String;
    class Iterable;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace sortedset {

          class DefaultSortedSetDocValuesReaderState : public ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState {
           public:
            enum {
              mid_init$_f02bd9ae3f412324,
              mid_init$_0aa7642301795061,
              mid_getChildResources_aa58b3beec16cbbd,
              mid_getDimTree_31fe6b5f17f7311c,
              mid_getDims_11d5156a64e3246d,
              mid_getDocValues_348af2e8d793dd96,
              mid_getFacetsConfig_b68548eec032942f,
              mid_getField_09a7afff1868fc5e,
              mid_getOrdRange_717bbb88d75a181e,
              mid_getPrefixToOrdRange_f125f26c07a7bec8,
              mid_getReader_38e68c08dc5fee6f,
              mid_getSize_20fbf7565993c3d7,
              mid_ramBytesUsed_16939d9d0a9a9721,
              mid_toString_09a7afff1868fc5e,
              max_mid
            };

            enum {
              fid_reader,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DefaultSortedSetDocValuesReaderState(jobject obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DefaultSortedSetDocValuesReaderState(const DefaultSortedSetDocValuesReaderState& obj) : ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState(obj) {}

            ::org::apache::lucene::index::IndexReader _get_reader() const;

            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::facet::FacetsConfig &);
            DefaultSortedSetDocValuesReaderState(const ::org::apache::lucene::index::IndexReader &, const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig &);

            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$DimTree getDimTree(const ::java::lang::String &) const;
            ::java::lang::Iterable getDims() const;
            ::org::apache::lucene::index::SortedSetDocValues getDocValues() const;
            ::org::apache::lucene::facet::FacetsConfig getFacetsConfig() const;
            ::java::lang::String getField() const;
            ::org::apache::lucene::facet::sortedset::SortedSetDocValuesReaderState$OrdRange getOrdRange(const ::java::lang::String &) const;
            ::java::util::Map getPrefixToOrdRange() const;
            ::org::apache::lucene::index::IndexReader getReader() const;
            jint getSize() const;
            jlong ramBytesUsed() const;
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
      namespace facet {
        namespace sortedset {
          extern PyType_Def PY_TYPE_DEF(DefaultSortedSetDocValuesReaderState);
          extern PyTypeObject *PY_TYPE(DefaultSortedSetDocValuesReaderState);

          class t_DefaultSortedSetDocValuesReaderState {
          public:
            PyObject_HEAD
            DefaultSortedSetDocValuesReaderState object;
            static PyObject *wrap_Object(const DefaultSortedSetDocValuesReaderState&);
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
