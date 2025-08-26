#ifndef org_apache_lucene_codecs_Codec_H
#define org_apache_lucene_codecs_Codec_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class DocValuesFormat;
        class LiveDocsFormat;
        class PointsFormat;
        class PostingsFormat;
        class SegmentInfoFormat;
        class StoredFieldsFormat;
        class Codec;
        class TermVectorsFormat;
        class CompoundFormat;
        class KnnVectorsFormat;
        class FieldInfosFormat;
        class NormsFormat;
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
            mid_availableCodecs_79131c6bbcf08916,
            mid_compoundFormat_5ccf17d12737e472,
            mid_docValuesFormat_8bc23da4b70aa111,
            mid_fieldInfosFormat_432de80d6afc329d,
            mid_forName_06f5fbe600d54c76,
            mid_getDefault_820c7dce26df28db,
            mid_getName_e7df854526d67fa3,
            mid_knnVectorsFormat_7fac28f68239bf9f,
            mid_liveDocsFormat_a14df1a2ec4b52a0,
            mid_normsFormat_119c76c8e09b0ea4,
            mid_pointsFormat_64e9dcd452234bc9,
            mid_postingsFormat_d6a14e29d4b97c21,
            mid_reloadCodecs_d603563f542d31ba,
            mid_segmentInfoFormat_b7e39676955b97da,
            mid_setDefault_c295922ff311d3f8,
            mid_storedFieldsFormat_8cf5ac770f75a8f2,
            mid_termVectorsFormat_4ef406c4238ea10b,
            mid_toString_e7df854526d67fa3,
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
