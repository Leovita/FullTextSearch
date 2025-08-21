#ifndef org_apache_lucene_facet_FacetsConfig_H
#define org_apache_lucene_facet_FacetsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
    class String;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsConfig$DimConfig;
        namespace taxonomy {
          class TaxonomyWriter;
        }
        class FacetsConfig$DrillDownTermsIndexing;
      }
      namespace document {
        class Document;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsConfig : public ::java::lang::Object {
         public:
          enum {
            mid_init$_3720c61b0679eb3e,
            mid_build_d6863227acb1d171,
            mid_build_6b2f87a99de0768e,
            mid_getDimConfig_8aef2bae47589795,
            mid_getDimConfigs_f125f26c07a7bec8,
            mid_isDimConfigured_4a13a663b5c11133,
            mid_pathToString_a51b33ee713386d2,
            mid_pathToString_27d74d799dbfd34b,
            mid_pathToString_1b44bc32a26f1c02,
            mid_setDrillDownTermsIndexing_37c5f07a96a80ed9,
            mid_setHierarchical_855d5fa744141d54,
            mid_setIndexFieldName_3d104da0b5c75e64,
            mid_setMultiValued_855d5fa744141d54,
            mid_setRequireDimCount_855d5fa744141d54,
            mid_stringToPath_a06e92f371939b0b,
            mid_getDefaultDimConfig_8d216690030321d2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsConfig(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsConfig(const FacetsConfig& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::facet::FacetsConfig$DimConfig *DEFAULT_DIM_CONFIG;
          static ::java::lang::String *DEFAULT_INDEX_FIELD_NAME;
          static jchar DELIM_CHAR;

          FacetsConfig();

          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::document::Document build(const ::org::apache::lucene::facet::taxonomy::TaxonomyWriter &, const ::org::apache::lucene::document::Document &) const;
          ::org::apache::lucene::facet::FacetsConfig$DimConfig getDimConfig(const ::java::lang::String &) const;
          ::java::util::Map getDimConfigs() const;
          jboolean isDimConfigured(const ::java::lang::String &) const;
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const ::java::lang::String &, const JArray< ::java::lang::String > &);
          static ::java::lang::String pathToString(const JArray< ::java::lang::String > &, jint);
          void setDrillDownTermsIndexing(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsConfig$DrillDownTermsIndexing &) const;
          void setHierarchical(const ::java::lang::String &, jboolean) const;
          void setIndexFieldName(const ::java::lang::String &, const ::java::lang::String &) const;
          void setMultiValued(const ::java::lang::String &, jboolean) const;
          void setRequireDimCount(const ::java::lang::String &, jboolean) const;
          static JArray< ::java::lang::String > stringToPath(const ::java::lang::String &);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(FacetsConfig);
        extern PyTypeObject *PY_TYPE(FacetsConfig);

        class t_FacetsConfig {
        public:
          PyObject_HEAD
          FacetsConfig object;
          static PyObject *wrap_Object(const FacetsConfig&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
