// rea decompile_all
// name: FUN_004e7d44
// address: 0x4e7d44
// body: available
// range: 0x4e7d44-0x4e7e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4e7d65 (push 0x4e7e9e followed by fs-segment stack chaining); handler 0x4e7e9e lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e7d44(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_8;

  puStack_24 = &stack0xfffffffc;
  local_8 = 0;
  puStack_28 = &LAB_004e7e9e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  iVar3 = FUN_004c2d00(param_1);
  if (iVar3 == 1) {
    iVar3 = FUN_004bb5c8(param_2);
    FUN_004082d0(&local_8,0,iVar3 + 1);
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    uVar7 = 0;
    if (iVar3 != 0) {
      uVar7 = *(undefined4 *)(iVar3 + -4);
    }
    uVar4 = FUN_00408220(local_8);
    FUN_004bb5d8(param_2,uVar4,uVar7);
    iVar3 = local_8;
    if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
      iVar3 = FUN_00407488(&local_8,local_8);
    }
    iVar8 = 0;
    if (iVar3 != 0) {
      iVar8 = *(int *)(iVar3 + -4);
    }
    if (0 < iVar8) {
      iVar3 = 1;
      do {
        iVar5 = local_8;
        if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
          iVar5 = FUN_00407488(&local_8,local_8);
        }
        if ((*(ushort *)(iVar5 + -2 + iVar3 * 2) < 0x100) &&
           (uVar6 = (uint)*(byte *)(iVar5 + -2 + iVar3 * 2),
           ((byte)(&DAT_004e7eac)[(int)uVar6 >> 3] >> (uVar6 & 7) & 1) != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          FUN_00408520(&local_8,iVar3 + -1);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_004bb690(param_1,local_8);
  }
  FUN_004c2b68(param_1,param_2,param_3);
  FUN_004ba900(param_2,5);
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    FUN_004e1f40(param_1,1);
  }
  puVar2 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004e7ea5;
  puStack_28 = (undefined1 *)0x4e7e9d;
  thunk_FUN_004072d8(&local_8,uStack_2c,puVar2);
  return;
}
