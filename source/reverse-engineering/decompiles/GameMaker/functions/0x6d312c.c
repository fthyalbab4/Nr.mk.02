// rea decompile_all
// name: FUN_006d312c
// address: 0x6d312c
// body: available
// range: 0x6d312c-0x6d340d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6d314f (push 0x6d340e followed by fs-segment stack chaining); handler 0x6d340e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d312c(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_10;
  int local_c;
  int local_8;

  local_1c = &stack0xfffffffc;
  local_10 = 6;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_20 = &LAB_006d340e;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = (undefined1 *)0x6d3157;
  local_8 = param_1;
  iVar4 = FUN_006f58f8();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d316c;
      cVar3 = FUN_006f5900(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d317b;
        local_28 = &stack0xfffffffc;
        FUN_006f5920(local_c,&local_10);
        local_2c = 0x6d318a;
        FUN_006d2414(1,local_c,local_10);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d3195;
  iVar4 = FUN_00652298();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d31aa;
      cVar3 = FUN_006522a0(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d31b9;
        local_28 = &stack0xfffffffc;
        FUN_006522c0(local_c,&stack0xffffffec);
        local_2c = 0x6d31c8;
        FUN_006d2414(2,local_c,unaff_EBX);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d31d3;
  iVar4 = FUN_0064de10();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d31e8;
      cVar3 = FUN_0064de18(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d31f7;
        local_28 = &stack0xfffffffc;
        FUN_0064de38(local_c,&stack0xffffffe8);
        local_2c = 0x6d3206;
        FUN_006d2414(3,local_c,unaff_ESI);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d3211;
  iVar4 = FUN_00722818();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d3226;
      cVar3 = FUN_00722820(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d3235;
        local_28 = &stack0xfffffffc;
        FUN_00722840(local_c,&local_1c);
        local_2c = 0x6d3244;
        FUN_006d2414(4,local_c,local_1c);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d324f;
  iVar4 = FUN_00655b18();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d3264;
      cVar3 = FUN_00655b20(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d3273;
        local_28 = &stack0xfffffffc;
        FUN_00655b40(local_c,&local_20);
        local_2c = 0x6d3282;
        FUN_006d2414(5,local_c,local_20);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d328d;
  iVar4 = FUN_006fcc30();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d32a2;
      cVar3 = FUN_006fcc38(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d32b1;
        local_28 = &stack0xfffffffc;
        FUN_006fcc58(local_c,&local_24);
        local_2c = 0x6d32c0;
        FUN_006d2414(6,local_c,local_24);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d32cb;
  iVar4 = FUN_006fa5e0();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d32e0;
      cVar3 = FUN_006fa5e8(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d32ef;
        local_28 = &stack0xfffffffc;
        FUN_006fa608(local_c,&local_28);
        local_2c = 0x6d32fe;
        FUN_006d2414(7,local_c,local_28);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d3309;
  iVar4 = FUN_0062ca94();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d331e;
      cVar3 = FUN_0062ca9c(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d332d;
        local_28 = &stack0xfffffffc;
        FUN_0062cabc(local_c,&local_2c);
        uVar1 = local_2c;
        local_2c = 0x6d333c;
        FUN_006d2414(8,local_c,uVar1);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d3347;
  iVar4 = FUN_00692efc();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d335c;
      cVar3 = FUN_00692f04(local_c);
      if (cVar3 != '\0') {
        local_2c = 0x6d336b;
        local_28 = &stack0xfffffffc;
        FUN_00692f24(local_c,&local_30);
        local_2c = 0x6d337a;
        FUN_006d2414(9,local_c,local_30);
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = (undefined1 *)0x6d3385;
  iVar4 = FUN_006bcca0();
  if (-1 < iVar4 + -1) {
    local_c = 0;
    do {
      local_28 = (undefined1 *)0x6d339a;
      cVar3 = FUN_006bcca8(local_c);
      if (cVar3 != '\0') {
        local_28 = (undefined1 *)0x6d33a8;
        FUN_006bcdb8(local_c,&local_34);
        if (local_34 != 0) {
          local_2c = 0x6d33b9;
          local_28 = &stack0xfffffffc;
          FUN_006bcdb8(local_c,&local_38);
          local_2c = 0x6d33c8;
          FUN_006d2414(10,local_c,local_38);
        }
      }
      local_c = local_c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (*(int *)(local_8 + 0x3bc) == 0) {
    local_28 = (undefined1 *)0xffffffff;
    local_2c = 0xffffffff;
    local_30 = 0x8000;
    local_34 = 0x6d33f3;
    FUN_006d1af4(local_8,L"<No name conflicts were found>",0xffffffff);
  }
  puVar2 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = &LAB_006d3415;
  local_2c = 0x6d340d;
  thunk_FUN_00406e80(&local_38,0xb,puVar2);
  return;
}
