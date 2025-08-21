#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91Codec_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91Codec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PointsFormat;
        class KnnVectorsFormat;
        class PostingsFormat;
        class FieldInfosFormat;
        class DocValuesFormat;
        class CompoundFormat;
        class TermVectorsFormat;
        class LiveDocsFormat;
        class NormsFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
      }
      namespace backward_codecs {
        namespace lucene91 {
          class Lucene91Codec$Mode;
        }
      }
    }
  }
}
namespace java {
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
        namespace lucene91 {

          class Lucene91Codec : public ::org::apache::lucene::codecs::Codec {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_cb2585f352de3efa,
              mid_compoundFormat_6844789daef630cb,
              mid_docValuesFormat_06c1ab6be6539da4,
              mid_fieldInfosFormat_3cf8b5a331e8768e,
              mid_getDocValuesFormatForField_97202d142f4d78a0,
              mid_getKnnVectorsFormatForField_e43dc95f99c292bf,
              mid_getPostingsFormatForField_8bba56aaf031458d,
              mid_knnVectorsFormat_9f07a770763426f0,
              mid_liveDocsFormat_739fbeb532ce34a5,
              mid_normsFormat_3022cec2c411efb0,
              mid_pointsFormat_b32c61a9161d0f11,
              mid_postingsFormat_019d203d73665477,
              mid_segmentInfoFormat_63cfb57cea7dab8a,
              mid_storedFieldsFormat_516d3e968c6386e2,
              mid_termVectorsFormat_f9a872e2edb74504,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene91Codec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene91Codec(const Lucene91Codec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene91Codec();
            Lucene91Codec(const ::org::apache::lucene::backward_codecs::lucene91::Lucene91Codec$Mode &);

            ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::KnnVectorsFormat getKnnVectorsFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::PostingsFormat getPostingsFormatForField(const ::java::lang::String &) const;
            ::org::apache::lucene::codecs::KnnVectorsFormat knnVectorsFormat() const;
            ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
            ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
            ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
            ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
            ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
            ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
            ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
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
        namespace lucene91 {
          extern PyType_Def PY_TYPE_DEF(Lucene91Codec);
          extern PyTypeObject *PY_TYPE(Lucene91Codec);

          class t_Lucene91Codec {
          public:
            PyObject_HEAD
            Lucene91Codec object;
            static PyObject *wrap_Object(const Lucene91Codec&);
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
