#ifndef org_apache_lucene_index_MergeState_H
#define org_apache_lucene_index_MergeState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class KnnVectorsReader;
        class PointsReader;
        class StoredFieldsReader;
        class NormsProducer;
        class TermVectorsReader;
        class FieldsProducer;
        class DocValuesProducer;
      }
      namespace util {
        class InfoStream;
        class Bits;
      }
      namespace index {
        class MergeState$DocMap;
        class SegmentInfo;
        class FieldInfos;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace util {
    namespace concurrent {
      class Executor;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class MergeState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_473c34be269224d8,
            max_mid
          };

          enum {
            fid_docMaps,
            fid_docValuesProducers,
            fid_fieldInfos,
            fid_fieldsProducers,
            fid_infoStream,
            fid_intraMergeTaskExecutor,
            fid_knnVectorsReaders,
            fid_liveDocs,
            fid_maxDocs,
            fid_mergeFieldInfos,
            fid_needsIndexSort,
            fid_normsProducers,
            fid_pointsReaders,
            fid_segmentInfo,
            fid_storedFieldsReaders,
            fid_termVectorsReaders,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MergeState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MergeState(const MergeState& obj) : ::java::lang::Object(obj) {}

          JArray< ::org::apache::lucene::index::MergeState$DocMap > _get_docMaps() const;
          JArray< ::org::apache::lucene::codecs::DocValuesProducer > _get_docValuesProducers() const;
          JArray< ::org::apache::lucene::index::FieldInfos > _get_fieldInfos() const;
          JArray< ::org::apache::lucene::codecs::FieldsProducer > _get_fieldsProducers() const;
          ::org::apache::lucene::util::InfoStream _get_infoStream() const;
          ::java::util::concurrent::Executor _get_intraMergeTaskExecutor() const;
          JArray< ::org::apache::lucene::codecs::KnnVectorsReader > _get_knnVectorsReaders() const;
          JArray< ::org::apache::lucene::util::Bits > _get_liveDocs() const;
          JArray< jint > _get_maxDocs() const;
          ::org::apache::lucene::index::FieldInfos _get_mergeFieldInfos() const;
          void _set_mergeFieldInfos(const ::org::apache::lucene::index::FieldInfos &) const;
          jboolean _get_needsIndexSort() const;
          void _set_needsIndexSort(jboolean) const;
          JArray< ::org::apache::lucene::codecs::NormsProducer > _get_normsProducers() const;
          JArray< ::org::apache::lucene::codecs::PointsReader > _get_pointsReaders() const;
          ::org::apache::lucene::index::SegmentInfo _get_segmentInfo() const;
          JArray< ::org::apache::lucene::codecs::StoredFieldsReader > _get_storedFieldsReaders() const;
          JArray< ::org::apache::lucene::codecs::TermVectorsReader > _get_termVectorsReaders() const;

          MergeState(const JArray< ::org::apache::lucene::index::MergeState$DocMap > &, const ::org::apache::lucene::index::SegmentInfo &, const ::org::apache::lucene::index::FieldInfos &, const JArray< ::org::apache::lucene::codecs::StoredFieldsReader > &, const JArray< ::org::apache::lucene::codecs::TermVectorsReader > &, const JArray< ::org::apache::lucene::codecs::NormsProducer > &, const JArray< ::org::apache::lucene::codecs::DocValuesProducer > &, const JArray< ::org::apache::lucene::index::FieldInfos > &, const JArray< ::org::apache::lucene::util::Bits > &, const JArray< ::org::apache::lucene::codecs::FieldsProducer > &, const JArray< ::org::apache::lucene::codecs::PointsReader > &, const JArray< ::org::apache::lucene::codecs::KnnVectorsReader > &, const JArray< jint > &, const ::org::apache::lucene::util::InfoStream &, const ::java::util::concurrent::Executor &, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(MergeState);
        extern PyTypeObject *PY_TYPE(MergeState);

        class t_MergeState {
        public:
          PyObject_HEAD
          MergeState object;
          static PyObject *wrap_Object(const MergeState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
