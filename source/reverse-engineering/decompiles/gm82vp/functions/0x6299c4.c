// rea decompile_all
// name: FUN_006299c4
// address: 0x6299c4
// body: available
// range: 0x6299c4-0x629ae1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing shows a Borland/Delphi-style SEH frame registration at 0x6299e8 (push 0x629ae2 followed by fs-segment stack chaining); handler 0x629ae2 lies outside this procedure's body, so callees, strings, and cross-references may omit the handler region.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006299c4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_FS_OFFSET;
  byte bVar6;
  undefined *apuStack_182e [6];
  int aiStack_1816 [6];
  undefined *apuStack_17fe [503];
  int aiStack_1022 [6];
  undefined2 *apuStack_100a [997];
  undefined4 *puStack_74;
  int iStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  undefined4 local_58;
  undefined4 local_52;
  undefined *apuStack_4e [5];
  undefined4 local_3a;
  int aiStack_36 [4];
  undefined4 local_26;
  undefined4 local_22;
  undefined2 *apuStack_1e [5];
  undefined2 local_a;
  int local_8;

  bVar6 = 0;
  local_58 = 0;
  puStack_68 = (undefined1 *)0x6299dd;
  local_8 = param_1;
  thunk_FUN_00407ad0(param_1);
  puStack_6c = &LAB_00629ae2;
  iStack_70 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_70;
  puVar3 = (undefined4 *)(PTR_DAT_00688c5c + (uint)bVar6 * -8 + 4);
  local_52 = *(undefined4 *)PTR_DAT_00688c5c;
  apuStack_4e[(uint)bVar6 * -2] = (undefined *)*puVar3;
  puStack_68 = &stack0xfffffffc;
  apuStack_4e[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = (undefined *)puVar3[(uint)bVar6 * -2 + 1];
  (apuStack_4e + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (undefined *)(puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  apuStack_4e[3] = (undefined *)0x10;
  apuStack_4e[4] = PTR_DAT_006891e0;
  puStack_74 = (undefined4 *)0x629a15;
  iVar2 = FUN_00408d44(&DAT_00629b00,local_8);
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  else {
    puStack_74 = &local_58;
    FUN_00408984(local_8,iVar2 + 1,99);
    local_a = FUN_00416600(local_58);
    FUN_00408a54(&local_8,iVar2,99);
    puVar3 = (undefined4 *)(PTR_DAT_00688a84 + (uint)bVar6 * -8 + 4);
    local_22 = *(undefined4 *)PTR_DAT_00688a84;
    apuStack_1e[(uint)bVar6 * -2] = (undefined2 *)*puVar3;
    apuStack_1e[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         (undefined2 *)puVar3[(uint)bVar6 * -2 + 1];
    (apuStack_1e + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (undefined2 *)(puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    uVar4 = 3;
    apuStack_1e[3] = (undefined2 *)0x2;
    apuStack_1e[4] = &local_a;
  }
  piVar5 = (int *)(PTR_DAT_00689344 + (uint)bVar6 * -8 + 4);
  local_3a = *(undefined4 *)PTR_DAT_00689344;
  aiStack_36[(uint)bVar6 * -2] = *piVar5;
  aiStack_36[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] = piVar5[(uint)bVar6 * -2 + 1];
  (aiStack_36 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
       (piVar5 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  iVar2 = local_8;
  if ((local_8 != 0) && (*(short *)(local_8 + -10) != 2)) {
    iVar2 = FUN_00407488(&local_8,local_8);
  }
  aiStack_36[3] = 0;
  if (iVar2 != 0) {
    aiStack_36[3] = *(int *)(iVar2 + -4);
  }
  aiStack_36[3] = aiStack_36[3] + 1;
  local_26 = FUN_00408220(local_8);
  FUN_00629914(&local_52,uVar4);
  puVar1 = puStack_6c;
  *in_FS_OFFSET = (int)puStack_74;
  puStack_6c = &LAB_00629ae9;
  iStack_70 = 0x629ad9;
  thunk_FUN_004072d8(&local_58,puStack_74,puVar1);
  iStack_70 = 0x629ae1;
  thunk_FUN_004072d8(&local_8);
  return;
}
