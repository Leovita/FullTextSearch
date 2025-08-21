#ifndef org_apache_lucene_codecs_Codec_H
#define org_apache_lucene_codecs_Codec_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class PointsFormat;
        class KnnVectorsFormat;
        class FieldInfosFormat;
        class PostingsFormat;
        class DocValuesFormat;
        class CompoundFormat;
        class Codec;
        class TermVectorsFormat;
        class LiveDocsFormat;
        class NormsFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class ClassLoader;
    class Class;
    class String;
  }
  namespace util {
    class Set;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class Codec : public ::java::lang::Object {
         public:
          enum {
            mid_availableCodecs_4df174295554d7bd,
            mid_compoundFormat_6844789daef630cb,
            mid_docValuesFormat_06c1ab6be6539da4,
            mid_fieldInfosFormat_3cf8b5a331e8768e,
            mid_forName_b9fc148eb4ab37f2,
            mid_getDefault_39da0291d4509749,
            mid_getName_09a7afff1868fc5e,
            mid_knnVectorsFormat_9f07a770763426f0,
            mid_liveDocsFormat_739fbeb532ce34a5,
            mid_normsFormat_3022cec2c411efb0,
            mid_pointsFormat_b32c61a9161d0f11,
            mid_postingsFormat_019d203d73665477,
            mid_reloadCodecs_7e882e12061eaf38,
            mid_segmentInfoFormat_63cfb57cea7dab8a,
            mid_setDefault_97e34c08d1ad9d65,
            mid_storedFieldsFormat_516d3e968c6386e2,
            mid_termVectorsFormat_f9a872e2edb74504,
            mid_toString_09a7afff1868fc5e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Codec(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Codec(const Codec& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableCodecs();
          ::org::apache::lucene::codecs::CompoundFormat compoundFormat() const;
          ::org::apache::lucene::codecs::DocValuesFormat docValuesFormat() const;
          ::org::apache::lucene::codecs::FieldInfosFormat fieldInfosFormat() const;
          static Codec forName(const ::java::lang::String &);
          static Codec getDefault();
          ::java::lang::String getName() const;
          ::org::apache::lucene::codecs::KnnVectorsFormat knnVectorsFormat() const;
          ::org::apache::lucene::codecs::LiveDocsFormat liveDocsFormat() const;
          ::org::apache::lucene::codecs::NormsFormat normsFormat() const;
          ::org::apache::lucene::codecs::PointsFormat pointsFormat() const;
          ::org::apache::lucene::codecs::PostingsFormat postingsFormat() const;
          static void reloadCodecs(const ::java::lang::ClassLoader &);
          ::org::apache::lucene::codecs::SegmentInfoFormat segmentInfoFormat() const;
          static void setDefault(const Codec &);
          ::org::apache::lucene::codecs::StoredFieldsFormat storedFieldsFormat() const;
          ::org::apache::lucene::codecs::TermVectorsFormat termVectorsFormat() const;
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(Codec);
        extern PyTypeObject *PY_TYPE(Codec);

        class t_Codec {
        public:
          PyObject_HEAD
          Codec object;
          static PyObject *wrap_Object(const Codec&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
