import { StatusFailedIcon, theme } from '@expo/styleguide';

import { IconBase, DocIconProps } from './IconBase';

export const NoIcon = ({ small }: DocIconProps) => (
  <IconBase Icon={StatusFailedIcon} color={theme.status.error} small={small} />
);
