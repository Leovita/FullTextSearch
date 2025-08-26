#ifndef org_apache_lucene_facet_FacetsConfig_H
#define org_apache_lucene_facet_FacetsConfig_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class Map;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace document {
        class Document;
      }
      namespace facet {
        class FacetsConfig$DimConfig;
        namespace taxonomy {
          class TaxonomyWriter;
        }
        class FacetsConfig$DrillDownTermsIndexing;
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
            mid_init$_e7bdbe105ce1bafb,
            mid_build_ce9b987dee2c5535,
            mid_build_94226cc79b83435a,
            mid_getDimConfig_1fb9e08918338a8e,
            mid_getDimConfigs_5004bdf19ed33453,
            mid_isDimConfigured_94f7e759d94961b0,
            mid_pathToString_6cc09e85e5e7973a,
            mid_pathToString_eea56c09aec4eb58,
            mid_pathToString_15f0b39e938e3224,
            mid_setDrillDownTermsIndexing_1ccc7c070c2163b2,
            mid_setHierarchical_0c3fb5e97dae8b90,
            mid_setIndexFieldName_0dd012a11c3f389b,
            mid_setMultiValued_0c3fb5e97dae8b90,
            mid_setRequireDimCount_0c3fb5e97dae8b90,
            mid_stringToPath_7b34cb521ce5d8ff,
            mid_getDefaultDimConfig_ae50604e908ef61c,
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
