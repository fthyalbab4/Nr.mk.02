// rea decompile_all
// name: FUN_004079b8
// address: 0x4079b8
// body: available
// range: 0x4079b8-0x407a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short * FUN_004079b8(short *param_1,short *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  byte in_AF;
  byte bVar11;
  byte bVar12;
  byte in_TF;
  byte in_IF;
  byte bVar13;
  byte bVar14;
  byte in_NT;
  undefined2 local_4;
  ushort uStack_2;

  bVar13 = 0;
  if (param_1 == param_2) {
    return param_1;
  }
  if ((((uint)param_1 & (uint)param_2) == 0) &&
     ((param_1 == (short *)0x0 || (param_2 == (short *)0x0)))) {
    return param_1;
  }
  cVar2 = (char)param_1[-5];
  bVar9 = cVar2 == '\0';
  bVar14 = SBORROW1(cVar2,'\x01');
  cVar2 = cVar2 + -1;
  bVar12 = cVar2 < '\0';
  bVar11 = cVar2 == '\0';
  bVar10 = (POPCOUNT(cVar2) & 1U) == 0;
  if ((bool)bVar11) {
    cVar2 = (char)param_2[-5];
    bVar9 = cVar2 == '\0';
    bVar14 = SBORROW1(cVar2,'\x01');
    cVar2 = cVar2 + -1;
    bVar12 = cVar2 < '\0';
    bVar11 = cVar2 == '\0';
    bVar10 = (POPCOUNT(cVar2) & 1U) == 0;
    if ((bool)bVar11) {
      if (*param_1 != *param_2) {
        return param_1;
      }
      uVar7 = *(uint *)(param_1 + -2) - *(uint *)(param_2 + -2);
      iVar5 = ((*(uint *)(param_1 + -2) < *(uint *)(param_2 + -2)) - 1 & uVar7) -
              *(int *)(param_1 + -2);
      iVar3 = (int)param_1 - iVar5;
      iVar6 = iVar5;
      while (uVar8 = *(uint *)(iVar6 + iVar3) ^ *(uint *)((int)param_2 + (iVar6 - iVar5)),
            uVar8 == 0) {
        iVar6 = iVar6 + 4;
        if (-1 < iVar6) goto LAB_004079f7;
      }
      uVar1 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      iVar6 = iVar6 + (uVar1 >> 3);
      if (iVar6 < 0) {
        return (short *)CONCAT31((int3)((uint)iVar3 >> 8),*(undefined1 *)(iVar6 + iVar3));
      }
LAB_004079f7:
      return (short *)(uVar7 * 2);
    }
    local_4 = 0;
    uStack_2 = 0;
    FUN_004083e8(&local_4);
    param_2 = (short *)CONCAT22(uStack_2,local_4);
  }
  else {
    local_4 = 0;
    uStack_2 = 0;
    FUN_004083e8(&local_4,param_1);
    param_1 = (short *)CONCAT22(uStack_2,local_4);
  }
  FUN_004079b8(param_1,param_2);
  iVar6 = CONCAT22(uStack_2,local_4);
  uStack_2 = (ushort)(in_NT & 1) * 0x4000 | (ushort)(bVar14 & 1) * 0x800 |
             (ushort)(bVar13 & 1) * 0x400 | (ushort)(in_IF & 1) * 0x200 |
             (ushort)(in_TF & 1) * 0x100 | (ushort)(bVar12 & 1) * 0x80 | (ushort)(bVar11 & 1) * 0x40
             | (ushort)(in_AF & 1) * 0x10 | (ushort)(bVar10 & 1) * 4 | (ushort)(bVar9 & 1);
  local_4 = 0x40;
  psVar4 = (short *)FUN_00404340(iVar6 + -0xc);
  return psVar4;
}
