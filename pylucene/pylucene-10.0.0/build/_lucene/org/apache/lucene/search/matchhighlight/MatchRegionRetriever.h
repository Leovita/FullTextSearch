#ifndef org_apache_lucene_search_matchhighlight_MatchRegionRetriever_H
#define org_apache_lucene_search_matchhighlight_MatchRegionRetriever_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Query;
        namespace matchhighlight {
          class MatchRegionRetriever$FieldValueProvider;
          class OffsetsRetrievalStrategySupplier;
          class OffsetRange;
          class MatchRegionRetriever$MatchOffsetsConsumer;
        }
        class TopDocs;
        class IndexSearcher;
      }
      namespace index {
        class LeafReaderContext;
        class IndexReader;
      }
      namespace analysis {
        class Analyzer;
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
  }
  namespace util {
    class Map;
    class List;
    namespace function {
      class Predicate;
      class ToIntFunction;
    }
    class PrimitiveIterator$OfInt;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace matchhighlight {

          class MatchRegionRetriever : public ::java::lang::Object {
           public:
            enum {
              mid_init$_48ba6b5c8ef11bbf,
              mid_init$_0dbfa4f0fb90a9a8,
              mid_computeOffsetRetrievalStrategies_ae537147a63977e9,
              mid_highlightDocument_d5577040d9ba548c,
              mid_highlightDocuments_9fc78026862b793d,
              mid_highlightDocuments_d6c429aa18142697,
              mid_highlightDocuments_fc2a40722a21906d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit MatchRegionRetriever(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            MatchRegionRetriever(const MatchRegionRetriever& obj) : ::java::lang::Object(obj) {}

            MatchRegionRetriever(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::analysis::Analyzer &, const ::java::util::function::Predicate &, const ::java::util::function::Predicate &);
            MatchRegionRetriever(const ::org::apache::lucene::search::IndexSearcher &, const ::org::apache::lucene::search::Query &, const ::org::apache::lucene::search::matchhighlight::OffsetsRetrievalStrategySupplier &, const ::java::util::function::Predicate &, const ::java::util::function::Predicate &);

            static ::org::apache::lucene::search::matchhighlight::OffsetsRetrievalStrategySupplier computeOffsetRetrievalStrategies(const ::org::apache::lucene::index::IndexReader &, const ::org::apache::lucene::analysis::Analyzer &);
            void highlightDocument(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$FieldValueProvider &, const ::java::util::function::ToIntFunction &, const ::java::util::Map &) const;
            void highlightDocuments(const ::org::apache::lucene::search::TopDocs &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$MatchOffsetsConsumer &) const;
            void highlightDocuments(const ::java::util::PrimitiveIterator$OfInt &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$MatchOffsetsConsumer &, const ::java::util::function::ToIntFunction &) const;
            void highlightDocuments(const ::java::util::PrimitiveIterator$OfInt &, const ::org::apache::lucene::search::matchhighlight::MatchRegionRetriever$MatchOffsetsConsumer &, const ::java::util::function::ToIntFunction &, jint, jint) const;
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
      namespace search {
        namespace matchhighlight {
          extern PyType_Def PY_TYPE_DEF(MatchRegionRetriever);
          extern PyTypeObject *PY_TYPE(MatchRegionRetriever);

          class t_MatchRegionRetriever {
          public:
            PyObject_HEAD
            MatchRegionRetriever object;
            static PyObject *wrap_Object(const MatchRegionRetriever&);
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
