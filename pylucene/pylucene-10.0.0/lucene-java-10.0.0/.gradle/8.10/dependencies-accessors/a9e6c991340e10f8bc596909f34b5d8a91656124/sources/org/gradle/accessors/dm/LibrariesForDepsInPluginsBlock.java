package org.gradle.accessors.dm;

import org.gradle.api.NonNullApi;
import org.gradle.api.artifacts.MinimalExternalModuleDependency;
import org.gradle.plugin.use.PluginDependency;
import org.gradle.api.artifacts.ExternalModuleDependencyBundle;
import org.gradle.api.artifacts.MutableVersionConstraint;
import org.gradle.api.provider.Provider;
import org.gradle.api.model.ObjectFactory;
import org.gradle.api.provider.ProviderFactory;
import org.gradle.api.internal.catalog.AbstractExternalDependencyFactory;
import org.gradle.api.internal.catalog.DefaultVersionCatalog;
import java.util.Map;
import org.gradle.api.internal.attributes.ImmutableAttributesFactory;
import org.gradle.api.internal.artifacts.dsl.CapabilityNotationParser;
import javax.inject.Inject;

/**
 * A catalog of dependencies accessible via the {@code deps} extension.
 */
@NonNullApi
public class LibrariesForDepsInPluginsBlock extends AbstractExternalDependencyFactory {

    private final AbstractExternalDependencyFactory owner = this;
    private final AntlrLibraryAccessors laccForAntlrLibraryAccessors = new AntlrLibraryAccessors(owner);
    private final AsmLibraryAccessors laccForAsmLibraryAccessors = new AsmLibraryAccessors(owner);
    private final CommonsLibraryAccessors laccForCommonsLibraryAccessors = new CommonsLibraryAccessors(owner);
    private final FlexmarkLibraryAccessors laccForFlexmarkLibraryAccessors = new FlexmarkLibraryAccessors(owner);
    private final JmhLibraryAccessors laccForJmhLibraryAccessors = new JmhLibraryAccessors(owner);
    private final MorfologikLibraryAccessors laccForMorfologikLibraryAccessors = new MorfologikLibraryAccessors(owner);
    private final OpennlpLibraryAccessors laccForOpennlpLibraryAccessors = new OpennlpLibraryAccessors(owner);
    private final RandomizedtestingLibraryAccessors laccForRandomizedtestingLibraryAccessors = new RandomizedtestingLibraryAccessors(owner);
    private final S2LibraryAccessors laccForS2LibraryAccessors = new S2LibraryAccessors(owner);
    private final VersionAccessors vaccForVersionAccessors = new VersionAccessors(providers, config);
    private final BundleAccessors baccForBundleAccessors = new BundleAccessors(objects, providers, config, attributesFactory, capabilityNotationParser);
    private final PluginAccessors paccForPluginAccessors = new PluginAccessors(providers, config);

    @Inject
    public LibrariesForDepsInPluginsBlock(DefaultVersionCatalog config, ProviderFactory providers, ObjectFactory objects, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) {
        super(config, providers, objects, attributesFactory, capabilityNotationParser);
    }

    /**
     * Dependency provider for <b>assertj</b> with <b>org.assertj:assertj-core</b> coordinates and
     * with version reference <b>assertj</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getAssertj() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("assertj");
    }

    /**
     * Dependency provider for <b>ecj</b> with <b>org.eclipse.jdt:ecj</b> coordinates and
     * with version reference <b>ecj</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getEcj() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("ecj");
    }

    /**
     * Dependency provider for <b>errorprone</b> with <b>com.google.errorprone:error_prone_core</b> coordinates and
     * with version reference <b>errorprone</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getErrorprone() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("errorprone");
    }

    /**
     * Dependency provider for <b>groovy</b> with <b>org.apache.groovy:groovy-all</b> coordinates and
     * with version reference <b>groovy</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getGroovy() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("groovy");
    }

    /**
     * Dependency provider for <b>hamcrest</b> with <b>org.hamcrest:hamcrest</b> coordinates and
     * with version reference <b>hamcrest</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getHamcrest() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("hamcrest");
    }

    /**
     * Dependency provider for <b>icu4j</b> with <b>com.ibm.icu:icu4j</b> coordinates and
     * with version reference <b>icu4j</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getIcu4j() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("icu4j");
    }

    /**
     * Dependency provider for <b>javacc</b> with <b>net.java.dev.javacc:javacc</b> coordinates and
     * with version reference <b>javacc</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getJavacc() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("javacc");
    }

    /**
     * Dependency provider for <b>jflex</b> with <b>de.jflex:jflex</b> coordinates and
     * with version reference <b>jflex</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getJflex() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("jflex");
    }

    /**
     * Dependency provider for <b>jgit</b> with <b>org.eclipse.jgit:org.eclipse.jgit</b> coordinates and
     * with version reference <b>jgit</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getJgit() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("jgit");
    }

    /**
     * Dependency provider for <b>jts</b> with <b>org.locationtech.jts:jts-core</b> coordinates and
     * with version reference <b>jts</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getJts() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("jts");
    }

    /**
     * Dependency provider for <b>junit</b> with <b>junit:junit</b> coordinates and
     * with version reference <b>junit</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getJunit() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("junit");
    }

    /**
     * Dependency provider for <b>nekohtml</b> with <b>net.sourceforge.nekohtml:nekohtml</b> coordinates and
     * with version reference <b>nekohtml</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getNekohtml() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("nekohtml");
    }

    /**
     * Dependency provider for <b>procfork</b> with <b>com.carrotsearch:procfork</b> coordinates and
     * with version reference <b>procfork</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getProcfork() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("procfork");
    }

    /**
     * Dependency provider for <b>rat</b> with <b>org.apache.rat:apache-rat</b> coordinates and
     * with version reference <b>rat</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getRat() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("rat");
    }

    /**
     * Dependency provider for <b>spatial4j</b> with <b>org.locationtech.spatial4j:spatial4j</b> coordinates and
     * with version reference <b>spatial4j</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getSpatial4j() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("spatial4j");
    }

    /**
     * Dependency provider for <b>xerces</b> with <b>xerces:xercesImpl</b> coordinates and
     * with version reference <b>xerces</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getXerces() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("xerces");
    }

    /**
     * Dependency provider for <b>zstd</b> with <b>com.github.luben:zstd-jni</b> coordinates and
     * with version reference <b>zstd</b>
     * <p>
     * This dependency was declared in catalog versions.toml
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public Provider<MinimalExternalModuleDependency> getZstd() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return create("zstd");
    }

    /**
     * Group of libraries at <b>antlr</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public AntlrLibraryAccessors getAntlr() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForAntlrLibraryAccessors;
    }

    /**
     * Group of libraries at <b>asm</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public AsmLibraryAccessors getAsm() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForAsmLibraryAccessors;
    }

    /**
     * Group of libraries at <b>commons</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public CommonsLibraryAccessors getCommons() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForCommonsLibraryAccessors;
    }

    /**
     * Group of libraries at <b>flexmark</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public FlexmarkLibraryAccessors getFlexmark() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForFlexmarkLibraryAccessors;
    }

    /**
     * Group of libraries at <b>jmh</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public JmhLibraryAccessors getJmh() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForJmhLibraryAccessors;
    }

    /**
     * Group of libraries at <b>morfologik</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public MorfologikLibraryAccessors getMorfologik() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForMorfologikLibraryAccessors;
    }

    /**
     * Group of libraries at <b>opennlp</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public OpennlpLibraryAccessors getOpennlp() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForOpennlpLibraryAccessors;
    }

    /**
     * Group of libraries at <b>randomizedtesting</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public RandomizedtestingLibraryAccessors getRandomizedtesting() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForRandomizedtestingLibraryAccessors;
    }

    /**
     * Group of libraries at <b>s2</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public S2LibraryAccessors getS2() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return laccForS2LibraryAccessors;
    }

    /**
     * Group of versions at <b>versions</b>
     */
    public VersionAccessors getVersions() {
        return vaccForVersionAccessors;
    }

    /**
     * Group of bundles at <b>bundles</b>
     *
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public BundleAccessors getBundles() {
        org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
        return baccForBundleAccessors;
    }

    /**
     * Group of plugins at <b>plugins</b>
     */
    public PluginAccessors getPlugins() {
        return paccForPluginAccessors;
    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class AntlrLibraryAccessors extends SubDependencyFactory {

        public AntlrLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>core</b> with <b>org.antlr:antlr4</b> coordinates and
         * with version reference <b>antlr</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCore() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("antlr.core");
        }

        /**
         * Dependency provider for <b>runtime</b> with <b>org.antlr:antlr4-runtime</b> coordinates and
         * with version reference <b>antlr</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getRuntime() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("antlr.runtime");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class AsmLibraryAccessors extends SubDependencyFactory {

        public AsmLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>commons</b> with <b>org.ow2.asm:asm-commons</b> coordinates and
         * with version reference <b>asm</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCommons() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("asm.commons");
        }

        /**
         * Dependency provider for <b>core</b> with <b>org.ow2.asm:asm</b> coordinates and
         * with version reference <b>asm</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCore() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("asm.core");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class CommonsLibraryAccessors extends SubDependencyFactory {

        public CommonsLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>codec</b> with <b>commons-codec:commons-codec</b> coordinates and
         * with version reference <b>commons.codec</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCodec() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("commons.codec");
        }

        /**
         * Dependency provider for <b>compress</b> with <b>org.apache.commons:commons-compress</b> coordinates and
         * with version reference <b>commons.compress</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCompress() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("commons.compress");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class FlexmarkLibraryAccessors extends SubDependencyFactory {
        private final FlexmarkExtLibraryAccessors laccForFlexmarkExtLibraryAccessors = new FlexmarkExtLibraryAccessors(owner);

        public FlexmarkLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>core</b> with <b>com.vladsch.flexmark:flexmark</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCore() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("flexmark.core");
        }

        /**
         * Group of libraries at <b>flexmark.ext</b>
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public FlexmarkExtLibraryAccessors getExt() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return laccForFlexmarkExtLibraryAccessors;
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class FlexmarkExtLibraryAccessors extends SubDependencyFactory {

        public FlexmarkExtLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>abbreviation</b> with <b>com.vladsch.flexmark:flexmark-ext-abbreviation</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getAbbreviation() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("flexmark.ext.abbreviation");
        }

        /**
         * Dependency provider for <b>attributes</b> with <b>com.vladsch.flexmark:flexmark-ext-attributes</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getAttributes() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("flexmark.ext.attributes");
        }

        /**
         * Dependency provider for <b>autolink</b> with <b>com.vladsch.flexmark:flexmark-ext-autolink</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getAutolink() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("flexmark.ext.autolink");
        }

        /**
         * Dependency provider for <b>tables</b> with <b>com.vladsch.flexmark:flexmark-ext-tables</b> coordinates and
         * with version reference <b>flexmark</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getTables() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("flexmark.ext.tables");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class JmhLibraryAccessors extends SubDependencyFactory {

        public JmhLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>annprocess</b> with <b>org.openjdk.jmh:jmh-generator-annprocess</b> coordinates and
         * with version reference <b>jmh</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getAnnprocess() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("jmh.annprocess");
        }

        /**
         * Dependency provider for <b>core</b> with <b>org.openjdk.jmh:jmh-core</b> coordinates and
         * with version reference <b>jmh</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getCore() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("jmh.core");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class MorfologikLibraryAccessors extends SubDependencyFactory {

        public MorfologikLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>polish</b> with <b>org.carrot2:morfologik-polish</b> coordinates and
         * with version reference <b>morfologik</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getPolish() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("morfologik.polish");
        }

        /**
         * Dependency provider for <b>stemming</b> with <b>org.carrot2:morfologik-stemming</b> coordinates and
         * with version reference <b>morfologik</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getStemming() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("morfologik.stemming");
        }

        /**
         * Dependency provider for <b>ukrainian</b> with <b>ua.net.nlp:morfologik-ukrainian-search</b> coordinates and
         * with version reference <b>morfologik.ukrainian</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getUkrainian() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("morfologik.ukrainian");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class OpennlpLibraryAccessors extends SubDependencyFactory {

        public OpennlpLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>tools</b> with <b>org.apache.opennlp:opennlp-tools</b> coordinates and
         * with version reference <b>opennlp</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getTools() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("opennlp.tools");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class RandomizedtestingLibraryAccessors extends SubDependencyFactory {

        public RandomizedtestingLibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>runner</b> with <b>com.carrotsearch.randomizedtesting:randomizedtesting-runner</b> coordinates and
         * with version reference <b>randomizedtesting</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getRunner() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("randomizedtesting.runner");
        }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class S2LibraryAccessors extends SubDependencyFactory {

        public S2LibraryAccessors(AbstractExternalDependencyFactory owner) { super(owner); }

        /**
         * Dependency provider for <b>geometry</b> with <b>io.sgr:s2-geometry-library-java</b> coordinates and
         * with version reference <b>s2.geometry</b>
         * <p>
         * This dependency was declared in catalog versions.toml
         *
         * @deprecated Will be removed in Gradle 9.0.
         */
        @Deprecated
        public Provider<MinimalExternalModuleDependency> getGeometry() {
            org.gradle.internal.deprecation.DeprecationLogger.deprecateBehaviour("Accessing libraries or bundles from version catalogs in the plugins block.").withAdvice("Only use versions or plugins from catalogs in the plugins block.").willBeRemovedInGradle9().withUpgradeGuideSection(8, "kotlin_dsl_deprecated_catalogs_plugins_block").nagUser();
            return create("s2.geometry");
        }

    }

    public static class VersionAccessors extends VersionFactory  {

        private final CommonsVersionAccessors vaccForCommonsVersionAccessors = new CommonsVersionAccessors(providers, config);
        private final MorfologikVersionAccessors vaccForMorfologikVersionAccessors = new MorfologikVersionAccessors(providers, config);
        private final S2VersionAccessors vaccForS2VersionAccessors = new S2VersionAccessors(providers, config);
        public VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>antlr</b> with value <b>4.11.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAntlr() { return getVersion("antlr"); }

        /**
         * Version alias <b>asm</b> with value <b>9.6</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAsm() { return getVersion("asm"); }

        /**
         * Version alias <b>assertj</b> with value <b>3.21.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getAssertj() { return getVersion("assertj"); }

        /**
         * Version alias <b>ecj</b> with value <b>3.36.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getEcj() { return getVersion("ecj"); }

        /**
         * Version alias <b>errorprone</b> with value <b>2.18.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getErrorprone() { return getVersion("errorprone"); }

        /**
         * Version alias <b>flexmark</b> with value <b>0.61.24</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getFlexmark() { return getVersion("flexmark"); }

        /**
         * Version alias <b>googleJavaFormat</b> with value <b>1.23.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGoogleJavaFormat() { return getVersion("googleJavaFormat"); }

        /**
         * Version alias <b>groovy</b> with value <b>4.0.22</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGroovy() { return getVersion("groovy"); }

        /**
         * Version alias <b>hamcrest</b> with value <b>2.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getHamcrest() { return getVersion("hamcrest"); }

        /**
         * Version alias <b>icu4j</b> with value <b>74.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getIcu4j() { return getVersion("icu4j"); }

        /**
         * Version alias <b>javacc</b> with value <b>7.0.12</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJavacc() { return getVersion("javacc"); }

        /**
         * Version alias <b>jflex</b> with value <b>1.8.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJflex() { return getVersion("jflex"); }

        /**
         * Version alias <b>jgit</b> with value <b>6.10.0.202406032230-r</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJgit() { return getVersion("jgit"); }

        /**
         * Version alias <b>jmh</b> with value <b>1.37</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJmh() { return getVersion("jmh"); }

        /**
         * Version alias <b>jts</b> with value <b>1.17.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJts() { return getVersion("jts"); }

        /**
         * Version alias <b>junit</b> with value <b>4.13.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getJunit() { return getVersion("junit"); }

        /**
         * Version alias <b>minGradle</b> with value <b>8.10</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getMinGradle() { return getVersion("minGradle"); }

        /**
         * Version alias <b>minJava</b> with value <b>21</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getMinJava() { return getVersion("minJava"); }

        /**
         * Version alias <b>nekohtml</b> with value <b>1.9.17</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getNekohtml() { return getVersion("nekohtml"); }

        /**
         * Version alias <b>opennlp</b> with value <b>2.3.2</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getOpennlp() { return getVersion("opennlp"); }

        /**
         * Version alias <b>procfork</b> with value <b>1.0.6</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getProcfork() { return getVersion("procfork"); }

        /**
         * Version alias <b>randomizedtesting</b> with value <b>2.8.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getRandomizedtesting() { return getVersion("randomizedtesting"); }

        /**
         * Version alias <b>rat</b> with value <b>0.14</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getRat() { return getVersion("rat"); }

        /**
         * Version alias <b>spatial4j</b> with value <b>0.8</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getSpatial4j() { return getVersion("spatial4j"); }

        /**
         * Version alias <b>xerces</b> with value <b>2.12.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getXerces() { return getVersion("xerces"); }

        /**
         * Version alias <b>zstd</b> with value <b>1.5.5-11</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getZstd() { return getVersion("zstd"); }

        /**
         * Group of versions at <b>versions.commons</b>
         */
        public CommonsVersionAccessors getCommons() {
            return vaccForCommonsVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.morfologik</b>
         */
        public MorfologikVersionAccessors getMorfologik() {
            return vaccForMorfologikVersionAccessors;
        }

        /**
         * Group of versions at <b>versions.s2</b>
         */
        public S2VersionAccessors getS2() {
            return vaccForS2VersionAccessors;
        }

    }

    public static class CommonsVersionAccessors extends VersionFactory  {

        public CommonsVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>commons.codec</b> with value <b>1.13</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getCodec() { return getVersion("commons.codec"); }

        /**
         * Version alias <b>commons.compress</b> with value <b>1.19</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getCompress() { return getVersion("commons.compress"); }

    }

    public static class MorfologikVersionAccessors extends VersionFactory  implements VersionNotationSupplier {

        public MorfologikVersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>morfologik</b> with value <b>2.1.9</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> asProvider() { return getVersion("morfologik"); }

        /**
         * Version alias <b>morfologik.ukrainian</b> with value <b>4.9.1</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getUkrainian() { return getVersion("morfologik.ukrainian"); }

    }

    public static class S2VersionAccessors extends VersionFactory  {

        public S2VersionAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Version alias <b>s2.geometry</b> with value <b>1.0.0</b>
         * <p>
         * If the version is a rich version and cannot be represented as a
         * single version string, an empty string is returned.
         * <p>
         * This version was declared in catalog versions.toml
         */
        public Provider<String> getGeometry() { return getVersion("s2.geometry"); }

    }

    /**
     * @deprecated Will be removed in Gradle 9.0.
     */
    @Deprecated
    public static class BundleAccessors extends BundleFactory {

        public BundleAccessors(ObjectFactory objects, ProviderFactory providers, DefaultVersionCatalog config, ImmutableAttributesFactory attributesFactory, CapabilityNotationParser capabilityNotationParser) { super(objects, providers, config, attributesFactory, capabilityNotationParser); }

    }

    public static class PluginAccessors extends PluginFactory {
        private final BenmanesPluginAccessors paccForBenmanesPluginAccessors = new BenmanesPluginAccessors(providers, config);
        private final OwaspPluginAccessors paccForOwaspPluginAccessors = new OwaspPluginAccessors(providers, config);
        private final UndercouchPluginAccessors paccForUndercouchPluginAccessors = new UndercouchPluginAccessors(providers, config);

        public PluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>dependencychecks</b> with plugin id <b>com.carrotsearch.gradle.dependencychecks</b> and
         * with version <b>0.0.9</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDependencychecks() { return createPlugin("dependencychecks"); }

        /**
         * Plugin provider for <b>errorprone</b> with plugin id <b>net.ltgt.errorprone</b> and
         * with version <b>3.1.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getErrorprone() { return createPlugin("errorprone"); }

        /**
         * Plugin provider for <b>forbiddenapis</b> with plugin id <b>de.thetaphi.forbiddenapis</b> and
         * with version <b>3.7</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getForbiddenapis() { return createPlugin("forbiddenapis"); }

        /**
         * Plugin provider for <b>jacocolog</b> with plugin id <b>org.barfuin.gradle.jacocolog</b> and
         * with version <b>3.1.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getJacocolog() { return createPlugin("jacocolog"); }

        /**
         * Plugin provider for <b>randomizedtesting</b> with plugin id <b>com.carrotsearch.gradle.randomizedtesting</b> and
         * with version <b>0.0.6</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getRandomizedtesting() { return createPlugin("randomizedtesting"); }

        /**
         * Plugin provider for <b>spotless</b> with plugin id <b>com.diffplug.spotless</b> and
         * with version <b>6.9.1</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getSpotless() { return createPlugin("spotless"); }

        /**
         * Plugin provider for <b>versionCatalogUpdate</b> with plugin id <b>nl.littlerobots.version-catalog-update</b> and
         * with version <b>0.8.4</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getVersionCatalogUpdate() { return createPlugin("versionCatalogUpdate"); }

        /**
         * Group of plugins at <b>plugins.benmanes</b>
         */
        public BenmanesPluginAccessors getBenmanes() {
            return paccForBenmanesPluginAccessors;
        }

        /**
         * Group of plugins at <b>plugins.owasp</b>
         */
        public OwaspPluginAccessors getOwasp() {
            return paccForOwaspPluginAccessors;
        }

        /**
         * Group of plugins at <b>plugins.undercouch</b>
         */
        public UndercouchPluginAccessors getUndercouch() {
            return paccForUndercouchPluginAccessors;
        }

    }

    public static class BenmanesPluginAccessors extends PluginFactory {

        public BenmanesPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>benmanes.versions</b> with plugin id <b>com.github.ben-manes.versions</b> and
         * with version <b>0.51.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getVersions() { return createPlugin("benmanes.versions"); }

    }

    public static class OwaspPluginAccessors extends PluginFactory {

        public OwaspPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>owasp.dependencycheck</b> with plugin id <b>org.owasp.dependencycheck</b> and
         * with version <b>7.2.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDependencycheck() { return createPlugin("owasp.dependencycheck"); }

    }

    public static class UndercouchPluginAccessors extends PluginFactory {

        public UndercouchPluginAccessors(ProviderFactory providers, DefaultVersionCatalog config) { super(providers, config); }

        /**
         * Plugin provider for <b>undercouch.download</b> with plugin id <b>de.undercouch.download</b> and
         * with version <b>5.2.0</b>
         * <p>
         * This plugin was declared in catalog versions.toml
         */
        public Provider<PluginDependency> getDownload() { return createPlugin("undercouch.download"); }

    }

}
