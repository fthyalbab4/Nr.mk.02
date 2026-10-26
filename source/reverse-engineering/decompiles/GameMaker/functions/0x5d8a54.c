// rea decompile_all
// name: FUN_005d8a54
// address: 0x5d8a54
// body: available
// range: 0x5d8a54-0x5d8bba inclusive
// range: 0x5d8bd4-0x5d8bf4 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x5d8a93 (push 0x5d8bbb followed by fs-segment stack chaining); handler 0x5d8bbb lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d8a54(undefined4 param_1,undefined4 param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2b8;
  undefined1 *puStack_2b4;
  undefined1 *puStack_2b0;
  int local_2a0 [2];
  undefined4 local_298;
  int local_294;
  undefined1 local_290 [384];
  uint auStack_110 [64];
  int local_10;
  int local_c;
  undefined4 local_8;
  uint *puVar6;

  puStack_2b0 = (undefined1 *)0x5d8a73;
  local_8 = param_1;
  FUN_005d80d4(param_1,param_2,local_2a0);
  if (0xffff < local_2a0[0]) {
    local_10 = 0;
    puStack_2b4 = &LAB_005d8bbb;
    uStack_2b8 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2b8;
    local_294 = param_3[2];
    local_298 = local_8;
    puStack_2b0 = &stack0xfffffffc;
    if (local_294 != 0) {
      puVar8 = local_290;
      local_c = 0;
      puVar5 = (uint *)(*param_3 + local_294 * 0x10);
      puStack_2b0 = &stack0xfffffffc;
      do {
        puVar6 = puVar5 + -4;
        uVar2 = *puVar6;
        if ((uVar2 & 0xfff) == 8) {
          *puVar8 = 0;
          iVar7 = local_10;
          puVar1 = auStack_110 + local_10 * 2;
          *puVar1 = 0;
          if ((uVar2 & 0x4000) == 0) {
            FUN_00409330(puVar5[-2],puVar1);
            auStack_110[iVar7 * 2 + 1] = 0;
            *(uint *)(puVar8 + 4) = *puVar1;
          }
          else {
            FUN_00409330(*(undefined4 *)puVar5[-2],puVar1);
            auStack_110[iVar7 * 2 + 1] = puVar5[-2];
            *(uint **)(puVar8 + 4) = puVar1;
          }
          local_10 = local_10 + 1;
        }
        else if ((uVar2 & 0xffff) == 4) {
          *puVar8 = 1;
          *(uint *)(puVar8 + 4) = puVar5[-2];
        }
        else {
          uVar4 = (uVar2 & 0xffff) - 5;
          if (uVar4 < 3) {
            *puVar8 = 2;
            *(uint *)(puVar8 + 4) = puVar5[-2];
            *(uint *)(puVar8 + 8) = puVar5[-1];
          }
          else if (uVar4 == 4) {
            *puVar8 = 0;
            *(uint **)(puVar8 + 4) = puVar6;
          }
          else {
            *puVar8 = 0;
            if ((uVar2 & 0x2000) == 0) {
              *(uint *)(puVar8 + 4) = puVar5[-2];
            }
            else {
              *(uint **)(puVar8 + 4) = puVar6;
            }
          }
        }
        puVar8 = puVar8 + 0xc;
        local_c = local_c + 1;
        puVar5 = puVar6;
      } while (local_c != local_294);
    }
    FUN_005d8a14(local_2a0);
    iVar7 = local_10;
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      if (auStack_110[iVar7 * 2 + 1] != 0) {
        uVar3 = FUN_004093e8(auStack_110[iVar7 * 2]);
        *(undefined4 *)auStack_110[iVar7 * 2 + 1] = uVar3;
      }
    }
    *in_FS_OFFSET = uStack_2b8;
    iVar7 = local_10;
    while (iVar7 != 0) {
      iVar7 = iVar7 + -1;
      puStack_2b0 = (undefined1 *)0x5d8bea;
      FUN_00407f0c(auStack_110 + iVar7 * 2,0);
    }
  }
  return;
}
