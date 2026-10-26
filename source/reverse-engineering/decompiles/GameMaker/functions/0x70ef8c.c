// rea decompile_all
// name: FUN_0070ef8c
// address: 0x70ef8c
// body: available
// range: 0x70ef8c-0x70f260 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x70efa9 (push 0x70f261 followed by fs-segment stack chaining); handler 0x70f261 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0070ef8c(void)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_c;
  undefined4 local_8;

  local_1c = &stack0xfffffffc;
  iVar5 = 6;
  do {
    local_8 = 0;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_20 = &LAB_0070f261;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x70efb3;
  iVar5 = FUN_006f58f8();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70efc4;
      cVar3 = FUN_006f5900(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70efd2;
        FUN_006f5920(iVar6,&local_8);
        local_28 = 0x70efda;
        iVar4 = FUN_006f5a0c(local_8);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70efeb;
  iVar5 = FUN_00652298();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70effc;
      cVar3 = FUN_006522a0(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f00a;
        FUN_006522c0(iVar6,&local_c);
        local_28 = 0x70f012;
        iVar4 = FUN_006523ac(local_c);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f023;
  iVar5 = FUN_0064de10();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f034;
      cVar3 = FUN_0064de18(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f042;
        FUN_0064de38(iVar6,&stack0xfffffff0);
        local_28 = 0x70f04a;
        iVar4 = FUN_0064df24(unaff_EBX);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f05b;
  iVar5 = FUN_00722818();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f06c;
      cVar3 = FUN_00722820(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f07a;
        FUN_00722840(iVar6,&stack0xffffffec);
        local_28 = 0x70f082;
        iVar4 = FUN_0072292c(unaff_ESI);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f093;
  iVar5 = FUN_00655b18();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f0a4;
      cVar3 = FUN_00655b20(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f0b2;
        FUN_00655b40(iVar6,&stack0xffffffe8);
        local_28 = 0x70f0ba;
        iVar4 = FUN_00655c2c(unaff_EDI);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f0cb;
  iVar5 = FUN_006fcc30();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f0dc;
      cVar3 = FUN_006fcc38(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f0ea;
        FUN_006fcc58(iVar6,&local_1c);
        local_28 = 0x70f0f2;
        iVar4 = FUN_006fcd44(local_1c);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f103;
  iVar5 = FUN_006fa5e0();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f114;
      cVar3 = FUN_006fa5e8(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f122;
        FUN_006fa608(iVar6,&local_20);
        local_28 = 0x70f12a;
        iVar4 = FUN_006fa6f4(local_20);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f13b;
  iVar5 = FUN_0062ca94();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f14c;
      cVar3 = FUN_0062ca9c(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f15a;
        FUN_0062cabc(iVar6,&local_24);
        local_28 = 0x70f162;
        iVar4 = FUN_0062cc14(local_24);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f173;
  iVar5 = FUN_00692efc();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f184;
      cVar3 = FUN_00692f04(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f192;
        FUN_00692f24(iVar6,&local_28);
        uVar1 = local_28;
        local_28 = 0x70f19a;
        iVar4 = FUN_00693010(uVar1);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f1ab;
  iVar5 = FUN_006cc7f4();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f1bc;
      cVar3 = FUN_006cc7fc(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f1ca;
        FUN_006cc81c(iVar6,&local_2c);
        local_28 = 0x70f1d2;
        iVar4 = FUN_006cc880(local_2c);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f1df;
  iVar5 = FUN_007132f8();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f1f0;
      cVar3 = FUN_00713300(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f1fe;
        FUN_00713320(iVar6,&local_30);
        local_28 = 0x70f208;
        iVar4 = FUN_0071335c(local_30,0);
        if (iVar6 != iVar4) goto LAB_0070f246;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_28 = 0x70f215;
  iVar5 = FUN_006bcca0();
  if (-1 < iVar5 + -1) {
    iVar6 = 0;
    do {
      local_28 = 0x70f226;
      cVar3 = FUN_006bcca8(iVar6);
      if (cVar3 != '\0') {
        local_28 = 0x70f234;
        FUN_006bcce4(iVar6,&local_34);
        local_28 = 0x70f23c;
        iVar4 = FUN_006bcd30(local_34);
        if (iVar6 != iVar4) break;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
LAB_0070f246:
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0070f268;
  local_20 = (undefined1 *)0x70f260;
  thunk_FUN_00406e80(&local_34,0xc,puVar2);
  return;
}
