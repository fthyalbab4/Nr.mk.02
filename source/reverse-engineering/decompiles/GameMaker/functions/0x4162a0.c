// rea decompile_all
// name: FUN_004162a0
// address: 0x4162a0
// body: available
// range: 0x4162a0-0x416404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x4162c5 (push 0x416405 followed by fs-segment stack chaining); handler 0x416405 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004162a0(short *param_1,char param_2,undefined4 *param_3)

{
  short sVar1;
  short *psVar2;
  undefined1 *puVar3;
  short *psVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  short *local_8;

  puStack_24 = (undefined1 *)0x4162ba;
  local_8 = param_1;
  thunk_FUN_00407660(param_1);
  psVar6 = local_8;
  puStack_28 = &LAB_00416405;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  psVar4 = local_8;
  puStack_24 = &stack0xfffffffc;
  if ((local_8 != (short *)0x0) && (puStack_24 = &stack0xfffffffc, local_8[-5] != 2)) {
    puStack_24 = &stack0xfffffffc;
    psVar4 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar8 = 0;
  if (psVar4 != (short *)0x0) {
    iVar8 = *(int *)(psVar4 + -2);
  }
  psVar7 = psVar6 + iVar8;
  psVar4 = local_8;
  if ((local_8 != (short *)0x0) && (local_8[-5] != 2)) {
    psVar4 = (short *)FUN_00407048(&local_8,local_8);
  }
  iVar8 = 0;
  if (psVar4 != (short *)0x0) {
    iVar8 = *(int *)(psVar4 + -2);
  }
  for (; psVar6 < psVar7; psVar6 = psVar6 + 1) {
    if (*psVar6 == 10) {
      if (param_2 == '\x01') {
        iVar8 = iVar8 + 1;
      }
    }
    else if (*psVar6 == 0xd) {
      if (param_2 == '\x01') {
        if (psVar6[1] == 10) {
          psVar6 = psVar6 + 1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
      }
      else if (psVar6[1] == 10) {
        iVar8 = iVar8 + -1;
      }
    }
  }
  iVar5 = FUN_00407c7c(psVar6);
  psVar6 = local_8;
  if (iVar8 == iVar5) {
    FUN_00407eb8(param_3,local_8);
  }
  else {
    FUN_00407ff4(param_3,0,iVar8);
    psVar4 = (short *)*param_3;
    while (psVar2 = psVar6, psVar2 < psVar7) {
      sVar1 = *psVar2;
      if (sVar1 == 10) {
        if (param_2 == '\x01') {
          *psVar4 = 0xd;
          psVar4 = psVar4 + 1;
        }
        *psVar4 = 10;
        psVar4 = psVar4 + 1;
        psVar6 = psVar2 + 1;
      }
      else if (sVar1 == 0xd) {
        if (param_2 == '\x01') {
          *psVar4 = 0xd;
          psVar4 = psVar4 + 1;
        }
        *psVar4 = 10;
        psVar4 = psVar4 + 1;
        psVar6 = psVar2 + 1;
        if (psVar2[1] == 10) {
          psVar6 = psVar2 + 2;
        }
      }
      else {
        *psVar4 = sVar1;
        psVar4 = psVar4 + 1;
        psVar6 = psVar2 + 1;
      }
    }
  }
  puVar3 = puStack_24;
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0041640c;
  puStack_28 = (undefined1 *)0x416404;
  thunk_FUN_00406e5c(&local_8,uStack_2c,puVar3);
  return;
}
