#ifndef org_apache_lucene_backward_codecs_lucene91_Lucene91Codec_H
#define org_apache_lucene_backward_codecs_lucene91_Lucene91Codec_H

#include "org/apache/lucene/codecs/Codec.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace backward_codecs {
        namespace lucene91 {
          class Lucene91Codec$Mode;
        }
      }
      namespace codecs {
        class DocValuesFormat;
        class LiveDocsFormat;
        class PointsFormat;
        class PostingsFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
        class TermVectorsFormat;
        class CompoundFormat;
        class KnnVectorsFormat;
        class FieldInfosFormat;
        class NormsFormat;
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
              mid_init$_e7bdbe105ce1bafb,
              mid_init$_770cfd5d51331af0,
              mid_compoundFormat_5ccf17d12737e472,
              mid_docValuesFormat_8bc23da4b70aa111,
              mid_fieldInfosFormat_432de80d6afc329d,
              mid_getDocValuesFormatForField_caba59d0f6dd2ac5,
              mid_getKnnVectorsFormatForField_a99403b582f28782,
              mid_getPostingsFormatForField_6919afeff7ce45d5,
              mid_knnVectorsFormat_7fac28f68239bf9f,
              mid_liveDocsFormat_a14df1a2ec4b52a0,
              mid_normsFormat_119c76c8e09b0ea4,
              mid_pointsFormat_64e9dcd452234bc9,
              mid_postingsFormat_d6a14e29d4b97c21,
              mid_segmentInfoFormat_b7e39676955b97da,
              mid_storedFieldsFormat_8cf5ac770f75a8f2,
              mid_termVectorsFormat_4ef406c4238ea10b,
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
