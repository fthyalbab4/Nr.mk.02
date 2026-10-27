// rea decompile_all
// name: FUN_005a2968
// address: 0x5a2968
// body: available
// range: 0x5a2968-0x5a2d24 inclusive
// range: 0x5a2d6c-0x5a2d75 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a29c6 (push 0x5a2d65 followed by fs-segment stack chaining); handler 0x5a2d65 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a29d4 (push 0x5a2d36 followed by fs-segment stack chaining); handler 0x5a2d36 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5a2a4f (push 0x5a2d25 followed by fs-segment stack chaining); handler 0x5a2d25 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005a2968(int *param_1)

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
    puStack_30c = (undefined1 *)0x5a299a;
    local_8 = param_1;
    iVar4 = FUN_00462804(&PTR_FUN_00458e94,1);
    local_8[0xb] = iVar4;
    local_c = (int *)local_8[0xb];
    local_11 = '\x01';
    puStack_30c = (undefined1 *)0x5a29bb;
    FUN_005a2188(local_8,local_2ec);
    puStack_310 = &LAB_005a2d65;
    uStack_314 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_314;
    puStack_31c = &LAB_005a2d36;
    uStack_320 = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_320;
    uStack_324 = 0x5a29e4;
    puStack_318 = &stack0xfffffffc;
    puStack_30c = &stack0xfffffffc;
    FUN_0046410c(local_8[0xb],0);
    if ((*(char *)((int)local_8 + 0x3e) == '\x01') || (local_1b8 == 1)) {
      uStack_324 = 0x5a2a03;
      FUN_00464480(local_8[0xb],3);
    }
    else {
      uStack_324 = 0x5a2a12;
      FUN_00464480(local_8[0xb],6);
    }
    uStack_324 = 0;
    uStack_328 = 0;
    puStack_32c = (undefined1 *)0x0;
    puStack_330 = local_2fc;
    puStack_334 = (undefined1 *)0x5a2a2a;
    FUN_00436ad0(0,0,0);
    puStack_32c = local_2fc;
    puStack_330 = (undefined1 *)0x0;
    puStack_334 = (undefined1 *)0x5a2a44;
    FUN_00406268(local_8,local_8,0);
    puStack_338 = &LAB_005a2d25;
    uStack_33c = *in_FS_OFFSET;
    *in_FS_OFFSET = (uint)&uStack_33c;
    ho = (HGDIOBJ)local_8[0xe];
    puStack_334 = &stack0xfffffffc;
    if (ho != (HGDIOBJ)0x0) {
      if (*(char *)((int)local_8 + 0x3e) == '\x01') {
        puStack_334 = &stack0xfffffffc;
        FUN_005a28dc(local_1e4,ho);
        uVar5 = FUN_00462594(local_8[0xe]);
        (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar5);
        local_11 = '\0';
      }
      else {
        puStack_334 = &stack0xfffffffc;
        DeleteObject(ho);
        local_8[0xe] = 0;
      }
    }
    FUN_005a4aec(local_1e4);
    piVar1 = (int *)local_8[0xb];
    FUN_0046410c(piVar1,0);
    (**(code **)(*piVar1 + 0x44))(piVar1,local_174);
    (**(code **)(*piVar1 + 0x38))(piVar1,local_170);
    local_10 = FUN_004632a8(piVar1,0);
    iVar4 = FUN_004632a8(piVar1,1);
    uVar7 = iVar4 - local_10;
    if (((int)uVar7 < 1) || (uVar5 = local_164, (uVar7 & 3) != 0)) {
      uVar5 = 1;
    }
    if (local_1a4 != 0) {
      while (iVar4 = FUN_005a3648(local_1e4), iVar4 != 2) {
        FUN_005a4db0(local_1e4,local_154);
        if ((((*(int *)(local_1dc + 0xc) == 0) && (local_15c != 0)) &&
            (cVar3 = FUN_00463224(local_8[0xb]), cVar3 == '\x03')) && (local_11 != '\0')) {
          uVar6 = FUN_005a2830(local_1e4);
          (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar6);
          *(undefined1 *)((int)local_8 + 0x22) = 1;
        }
        local_10 = FUN_004632a8(local_8[0xb],0);
        while (local_158 < local_170) {
          iVar4 = FUN_005a4c74(local_1e4,&local_10,uVar5);
          local_10 = local_10 + uVar7 * iVar4;
        }
        FUN_005a4e10(local_1e4);
      }
      local_19c = local_1f0;
      local_18c = local_1e8;
      if (local_1ec != '\0') {
        local_188 = 0xffffffff;
        local_15c = 0;
      }
      FUN_005a4db0(local_1e4,local_154);
      local_10 = FUN_004632a8(local_8[0xb],0);
    }
    if (((local_1a4 == 0) || (local_1ec != '\0')) && ((local_15c != 0 && (local_11 != '\0')))) {
      uVar6 = FUN_005a2830(local_1e4);
      (**(code **)(*(int *)local_8[0xb] + 0x3c))((int *)local_8[0xb],uVar6);
      *(undefined1 *)((int)local_8 + 0x22) = 1;
      local_10 = FUN_004632a8(local_8[0xb],0);
    }
    while (local_158 < local_170) {
      iVar4 = FUN_005a4c74(local_1e4,&local_10,uVar5);
      local_10 = local_10 + uVar7 * iVar4;
    }
    if (local_1a4 != 0) {
      FUN_005a4e10(local_1e4);
    }
    FUN_005a375c(local_1e4);
    puVar2 = puStack_334;
    *in_FS_OFFSET = uStack_33c;
    puStack_334 = &LAB_005a2d2c;
    puStack_338 = (undefined1 *)0x5a2cca;
    iVar4 = FUN_004043a8(0,uStack_33c,puVar2);
    if (iVar4 == 0) {
      puStack_338 = (undefined1 *)0x64;
    }
    else {
      puStack_338 = (undefined1 *)0x0;
    }
    uStack_33c = (uint)*(byte *)((int)local_8 + 0x22);
    FUN_00436ad0(0,0,0,local_2fc,0);
    FUN_00406268(local_8,local_8,2,0,local_2fc);
    if (*(char *)((int)local_8 + 0x22) != '\0') {
      local_8 = (int *)(**(code **)(*local_8 + 0x10))(local_8,local_8);
    }
    return local_8;
  }
  return local_c;
}
