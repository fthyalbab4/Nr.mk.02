// rea decompile_all
// name: FUN_0054ee24
// address: 0x54ee24
// body: available
// range: 0x54ee24-0x54f1e0 inclusive
// range: 0x54f228-0x54f231 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54ee82 (push 0x54f221 followed by fs-segment stack chaining); handler 0x54f221 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54ee90 (push 0x54f1f2 followed by fs-segment stack chaining); handler 0x54f1f2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x54ef0b (push 0x54f1e1 followed by fs-segment stack chaining); handler 0x54f1e1 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0054ee24(int *param_1)

{
  HGDIOBJ ho;
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *in_FS_OFFSET;
  uint uStack_33c;
  undefined1 *puStack_338;
  undefined1 *puStack_334;
  undefined1 *puStack_330;
  undefined1 *puStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  uint uStack_320;
  undefined1 *puStack_31c;
  undefined1 *puStack_318;
  uint uStack_314;
  undefined1 *puStack_310;
  undefined1 *puStack_30c;
  undefined1 local_2fc [16];
  undefined1 local_2ec [252];
  undefined4 local_1f0;
  char local_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4 [8];
  int local_1dc;
  int local_1b8;
  int local_1a4;
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_174;
  uint local_170;
  undefined4 local_164;
  int local_15c;
  uint local_158;
  undefined4 local_154;
  char local_11;
  int local_10;
  int *local_c;
  int *local_8;

  local_c = (int *)param_1[0xb];
  if (local_c == (int *)0x0) {
    puStack_30c = (undefined1 *)0x54ee56;
    local_8 = param_1;
    iVar4 = FUN_00462144(&PTR_FUN_004587d4,1);
    local_8[0xb] = iVar4;
    local_c = (int *)local_8[0xb];
    local_11 = '\x01';
    puStack_30c = (undefined1 *)0x54ee77;
    FUN_0054e644(local_8,local_2ec);
    puStack_310 = &LAB_0054f221;
    uStack_314 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_314;
    puStack_31c = &LAB_0054f1f2;
    uStack_320 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_320;
    uStack_324 = 0x54eea0;
    puStack_318 = &stack0xfffffffc;
    puStack_30c = &stack0xfffffffc;
    FUN_00463a4c(local_8[0xb],0);
    if ((*(char *)((int)local_8 + 0x3e) == '\x01') || (local_1b8 == 1)) {
      uStack_324 = 0x54eebf;
      FUN_00463dc0(local_8[0xb],3);
    }
    else {
      uStack_324 = 0x54eece;
      FUN_00463dc0(local_8[0xb],6);
    }
    uStack_324 = 0;
    uStack_328 = 0;
    puStack_32c = (undefined1 *)0x0;
    puStack_330 = local_2fc;
    puStack_334 = (undefined1 *)0x54eee6;
    FUN_00438c38(0,0,0);
    puStack_32c = local_2fc;
    puStack_330 = (undefined1 *)0x0;
    puStack_334 = (undefined1 *)0x54ef00;
    FUN_00405d08(local_8,local_8,0);
    puStack_338 = &LAB_0054f1e1;
    uStack_33c = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_33c;
    ho = (HGDIOBJ)local_8[0xe];
    puStack_334 = &stack0xfffffffc;
    if (ho != (HGDIOBJ)0x0) {
      if (*(char *)((int)local_8 + 0x3e) == '\x01') {
        puStack_334 = &stack0xfffffffc;
        FUN_0054ed98(local_1e4,ho);
        uVar5 = FUN_00461ed4(local_8[0xe]);
        (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar5);
        local_11 = '\0';
      }
      else {
        puStack_334 = &stack0xfffffffc;
        DeleteObject(ho);
        local_8[0xe] = 0;
      }
    }
    FUN_00550fa8(local_1e4);
    piVar1 = (int *)local_8[0xb];
    FUN_00463a4c(piVar1,0);
    (**(code **)(*piVar1 + 0x44))(piVar1,local_174);
    (**(code **)(*piVar1 + 0x38))(piVar1,local_170);
    local_10 = FUN_00462be8(piVar1,0);
    iVar4 = FUN_00462be8(piVar1,1);
    uVar7 = iVar4 - local_10;
    if (((int)uVar7 < 1) || (uVar5 = local_164, (uVar7 & 3) != 0)) {
      uVar5 = 1;
    }
    if (local_1a4 != 0) {
      while (iVar4 = FUN_0054fb04(local_1e4), iVar4 != 2) {
        FUN_0055126c(local_1e4,local_154);
        if ((((*(int *)(local_1dc + 0xc) == 0) && (local_15c != 0)) &&
            (cVar3 = FUN_00462b64(local_8[0xb]), cVar3 == '\x03')) && (local_11 != '\0')) {
          uVar6 = FUN_0054ecec(local_1e4);
          (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar6);
          *(undefined1 *)((int)local_8 + 0x22) = 1;
        }
        local_10 = FUN_00462be8(local_8[0xb],0);
        while (local_158 < local_170) {
          iVar4 = FUN_00551130(local_1e4,&local_10,uVar5);
          local_10 = local_10 + uVar7 * iVar4;
        }
        FUN_005512cc(local_1e4);
      }
      local_19c = local_1f0;
      local_18c = local_1e8;
      if (local_1ec != '\0') {
        local_188 = 0xffffffff;
        local_15c = 0;
      }
      FUN_0055126c(local_1e4,local_154);
      local_10 = FUN_00462be8(local_8[0xb],0);
    }
    if (((local_1a4 == 0) || (local_1ec != '\0')) && ((local_15c != 0 && (local_11 != '\0')))) {
      uVar6 = FUN_0054ecec(local_1e4);
      (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar6);
      *(undefined1 *)((int)local_8 + 0x22) = 1;
      local_10 = FUN_00462be8(local_8[0xb],0);
    }
    while (local_158 < local_170) {
      iVar4 = FUN_00551130(local_1e4,&local_10,uVar5);
      local_10 = local_10 + uVar7 * iVar4;
    }
    if (local_1a4 != 0) {
      FUN_005512cc(local_1e4);
    }
    FUN_0054fc18(local_1e4);
    puVar2 = puStack_334;
    *in_FS_OFFSET = uStack_33c;
    puStack_334 = &LAB_0054f1e8;
    puStack_338 = (undefined1 *)0x54f186;
    iVar4 = FUN_004043a0(0,uStack_33c,puVar2);
    if (iVar4 == 0) {
      puStack_338 = (undefined1 *)0x64;
    }
    else {
      puStack_338 = (undefined1 *)0x0;
    }
    uStack_33c = (uint)*(byte *)((int)local_8 + 0x22);
    FUN_00438c38(0,0,0,local_2fc,0);
    FUN_00405d08(local_8,local_8,2,0,local_2fc);
    if (*(char *)((int)local_8 + 0x22) != '\0') {
      local_8 = (int *)(**(code **)(*local_8 + 0x10))(local_8,local_8);
    }
    return local_8;
  }
  return local_c;
}
