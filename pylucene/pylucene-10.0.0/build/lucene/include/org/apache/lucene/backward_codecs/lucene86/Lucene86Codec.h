#ifndef org_apache_lucene_backward_codecs_lucene86_Lucene86Codec_H
#define org_apache_lucene_backward_codecs_lucene86_Lucene86Codec_H

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
        namespace lucene50 {
          class Lucene50StoredFieldsFormat$Mode;
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
        namespace lucene86 {

          class Lucene86Codec : public ::org::apache::lucene::codecs::Codec {
           public:
            enum {
              mid_init$_3720c61b0679eb3e,
              mid_init$_cd806e323f0c1d4d,
              mid_compoundFormat_6844789daef630cb,
              mid_docValuesFormat_06c1ab6be6539da4,
              mid_fieldInfosFormat_3cf8b5a331e8768e,
              mid_getDocValuesFormatForField_97202d142f4d78a0,
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

            explicit Lucene86Codec(jobject obj) : ::org::apache::lucene::codecs::Codec(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86Codec(const Lucene86Codec& obj) : ::org::apache::lucene::codecs::Codec(obj) {}

            Lucene86Codec();
            Lucene86Codec(const ::org::apache::lucene::backward_codecs::lucene50::Lucene50StoredFieldsFormat$Mode &);

            ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
            ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
            ::org::apache::lucene::codecs::DocValuesFormat getDocValuesFormatForField(const ::java::lang::String &) const;
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
        namespace lucene86 {
          extern PyType_Def PY_TYPE_DEF(Lucene86Codec);
          extern PyTypeObject *PY_TYPE(Lucene86Codec);

          class t_Lucene86Codec {
          public:
            PyObject_HEAD
            Lucene86Codec object;
            static PyObject *wrap_Object(const Lucene86Codec&);
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
